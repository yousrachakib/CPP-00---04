# How to Open an input file in C++:

	* To open an input file in C++, we use the std::ifstream class from the <fstream> header.
# What is the <fstream> Header:

	* The fstream header provides classes and functions to work with files. It is part of Standard Library and is commonly used for file input/output operations. the <fstream> header is drived from the more general <ios> and <istreal> headers, which provide the basic input/output capabilities.

	* The <fstream> header defines three classes for file input/output operations:

		- std::ifstream : This class represents an input file stream. It is used for reading data from a file.
		- std::ofstream : This class represents an output file streal. It is used for reading data from a file.
		- std::fstream : This class represents a file stream that can be used for both input and output operations. It provides bidirectional file acess.

	* These classes inherit from the base classes std::basic_ios and std::basic_ostream (for ifstream), std::basic_ostream (for ofstream), and std::basic_iostream (for fstream), which define the basic functionality for input/output streams.

	* The <fstream> header provides member functions for opening, closing, reading from, and writing to files, among other operations. Here are some commonly used member functions:

		- open: Opens a file with the specified filename.
		- close: Closes the currently opened file.
		- is_open: Checks if a file is currently open.
		- eof: Checks if the end-of-file has been reached.
		- fail: Checks if a stream operation has failed.
		- getline: Reads a line of text from the file.
		- operator<<: Writes data to the file.
		- operator>>: Reads data from the file.
	
	* The <fstream> header provides many more functionalities for file input/output operations, such as seeking, file position manipulation, error handling, and binary file operations. You can refer to the C++ documentation for further details on each of these classes and their member functions.

# std::string::find (size_t find (const string& str, size_t pos = 0) const):

	* this function is useful to Searches the string for the first occurrence of the sequence specified by its arguments, When pos is specified, the search only includes characters at or after position pos, ignoring any possible occurrences that include characters before pos.
	* return value : The position of the first character of the first match.
	If no matches were found, the function returns string::npos.