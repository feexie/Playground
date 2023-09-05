class UserProfile:
	def __init__(self, username, first_name, last_name, email, age):
		self.username = username
		self.first_name = first_name
		self.last_name = last_name
		self.email = email
		self.age = age

		def __str__(self):
			profile_info = (
					f"Username: {self.username}\n"
					f"First Name: {self.first_name}\n"
					f"Last Name: {self.last_name}\n"
					f"Email: {self.email}\n"
					f"Age: {self.age}\n"
				       )
			return profile_info


			def create_user_profile():
				username = input("Enter your username: ")
				first_name = input("Enter your first name: ")
				last_name = input("Enter your last name: ")
				email = input("Enter your email: ")
				age = input("Enter your age: ")

				user_profile = UserProfile(username, first_name, last_name, email, age)
	return user_profile


	def main():
		user_profile = create_user_profile()
	print("\nUser Profile:")
	 print(user_profile)


	 if __name__ == "__main__":
main()

