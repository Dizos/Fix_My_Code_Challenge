#!/usr/bin/node
const size = parseInt(process.argv[2]);

for (let i = 0; i < size; i++) {
    console.log('#'.repeat(size));
}
