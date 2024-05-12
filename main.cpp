import file_loader;
import <memory>;

using namespace std;

int main() {
	unique_ptr<FileLoader> fl(new FileLoader());
	fl->instanceInfo();

	unique_ptr<FileLoader> fl1(new FileLoader(FileType::csv, "test.csv"));
	fl1->instanceInfo();
}