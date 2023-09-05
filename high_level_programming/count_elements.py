import customstring

# Example input string and delimiter
input_string = "apple,banana,cherry"
delimiter = ","

# Call the custom C extension function to count elements
element_count = customstring.count_elements(input_string, delimiter)

print(f"Number of elements separated by '{delimiter}': {element_count}")

