export module file_loader;

import data_loader;
import <iostream>;
import <string>;

export enum class FileType { csv };

export class FileLoader: public DataLoader {
public:
	FileLoader(FileType fileType, std::string filePath);
	FileLoader();
	~FileLoader();
	void instanceInfo() const override;
private:
	static int count;
	FileType fileType;
	std::string filePath;
};

FileLoader::FileLoader(FileType fileType, std::string filePath):
	fileType(fileType), filePath(filePath) {
	++count;
}

FileLoader::FileLoader() { ++count; }

FileLoader::~FileLoader() { --count; }

int FileLoader::count = 0;

export void FileLoader::instanceInfo() const {
	std::cout << "File #" << count;
	if (filePath.length())
		std::cout << " (" << filePath << ")";
	std::cout << std::endl;
}