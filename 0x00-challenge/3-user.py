#!/usr/bin/python3
"""
User class with password validation
"""

class User:
    """
    User class with name and password attributes
    """
    
    def __init__(self, name=''):
        """
        Initialize user with a name
        """
        self.__name = name
        self.__password = None

    @property
    def name(self):
        """
        Getter for name
        """
        return self.__name

    @property
    def password(self):
        """
        Getter for password
        """
        return self.__password

    def is_valid_password(self, pwd):
        """
        Validate password
        
        Args:
            pwd (str): Password to validate
        
        Returns:
            bool: True if password is valid, False otherwise
        """
        if pwd is None:
            return False
        
        if self.__password is None:
            return False
        
        return self.__password == pwd

def test_user():
    """
    Test user password validation
    """
    print("Test User")
    user = User("Test User")
    if user.is_valid_password(None):
        print("is_valid_password should return False with None")
        exit(1)
    
    # Test with an actual password
    user.password = "TestPassword123"
    if not user.is_valid_password("TestPassword123"):
        print("is_valid_password should return True if it's the right password")
        exit(1)
    
    print("All tests passed!")

if __name__ == "__main__":
    test_user()
