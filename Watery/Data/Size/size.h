//
// Created by Mike Smith on 2017/4/18.
//

#ifndef WATERY_SIZE_H
#define WATERY_SIZE_H

#include <cstddef>

namespace watery
{
	class Size
	{
	private:
		size_t _width;
		size_t _height;
		size_t _depth;
	
	public:
		Size(size_t width = 0, size_t height = 0, size_t depth = 0) : _width(width), _height(height), _depth(depth) {}
		virtual ~Size(void) {}
		virtual size_t width(void) const { return _width; }
		virtual size_t height(void) const { return _height; }
		virtual size_t depth(void) const { return _depth; }
		virtual size_t volume(void) const { return _width * _height * _depth; }
		virtual size_t area(void) const { return _width * _height; }
		virtual void set_width(size_t width) { _width = width; }
		virtual void set_height(size_t height) { _height = height; }
		virtual void set_depth(size_t depth) { _depth = depth; }
		virtual void set_size(size_t width, size_t height, size_t depth) { _width = width, _height = height, _depth = depth; }
	};
}

#endif  // WATERY_SIZE_H