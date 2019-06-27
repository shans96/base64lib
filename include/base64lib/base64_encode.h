#include <iostream>
#include <string>
#include <vector>

static const char *b64_encoding_table =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

enum pad_type
{
	not_padded,
	padded_once,
	padded_twice
};

std::string encode_to_base64(const char *source_bytes,
	size_t source_bytes_size);
pad_type pad(std::vector<unsigned char> *vector);