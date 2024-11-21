#!/usr/bin/env ruby

def convert_to_number(arg)
  
  Integer(arg)
rescue ArgumentError
  arg
end

args = ARGV.map { |arg| convert_to_number(arg) }
  .select { |arg| arg.is_a?(Integer) }
  .sort
  .reverse

puts args
