#ifndef __DEP_CHECKER__FILESYSTEMINCLUDE_H
#define __DEP_CHECKER__FILESYSTEMINCLUDE_H

#if ( defined _MSC_VER && ( _MSC_VER > 1900 || _MSC_VER == 1900 ) ) || \
        ( defined __GNUC__ && (__GNUC__ > 5 || \
                                (__GNUC__ == 5 && \
                                    (__GNUC_MINOR__ > 3 || (__GNUC_MINOR__ == 3 && __GNUC_PATCHLEVEL__ > 0) ) ) ) )

#include <experimental/filesystem>

namespace adapted_namespace
{
typedef std::experimental::filesystem::path path;
typedef std::experimental::filesystem::directory_iterator directory_iterator;
typedef std::experimental::filesystem::recursive_directory_iterator recursive_directory_iterator;
}

using std::experimental::filesystem::current_path;
using std::experimental::filesystem::file_size;
using std::experimental::filesystem::is_directory;
using std::experimental::filesystem::is_regular_file;
using std::experimental::filesystem::is_regular_file;
using std::experimental::filesystem::remove;
using std::experimental::filesystem::rename;

#else

#include <boost/filesystem.hpp>

namespace adapted_namespace
{
typedef boost::filesystem::path path;
typedef boost::filesystem::directory_iterator directory_iterator;
typedef boost::filesystem::recursive_directory_iterator recursive_directory_iterator;
}

using boost::filesystem::current_path;
using boost::filesystem::file_size;
using boost::filesystem::is_directory;
using boost::filesystem::is_regular_file;
using boost::filesystem::is_regular_file;
using boost::filesystem::remove;
using boost::filesystem::rename;


#endif

#endif // !__DEP_CHECKER__FILESYSTEMINCLUDE_H
