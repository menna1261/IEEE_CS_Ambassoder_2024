def get_book_details():
    try:
        title = input("Title: ")
        if title.isdigit():
            raise ValueError("Book's title must be a string")

        author = input("Author: ")
        if author.isdigit():
            raise ValueError("Author's name must be a string")

        pub_year = input("Publication year: ")
        if not pub_year.isdigit():
            raise ValueError("Publication year must be a number")

        library = {
            "title": title,
            "author": author,
            "publication_year": int(pub_year) 
        }

        print("Book details added successfully!")
        print(library)

    except ValueError :
        print(f"Input Error: {e}")

print("Enter book details:")
get_book_details()
