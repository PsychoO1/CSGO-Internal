#include "SDK.h"

class Vector2
{
public:
	Vector2( void )
	{
		x = y = 0.0f;
	}

	Vector2( float X, float Y )
	{
		x = X; y = Y;
	}

	Vector2( float* v )
	{
		x = v[0]; y = v[1];
	}

	Vector2( const float* v )
	{
		x = v[0]; y = v[1];
	}

	Vector2( const Vector2& v )
	{
		x = v.x; y = v.y;
	}

	Vector2& operator=( const Vector2& v )
	{
		x = v.x; y = v.y; return *this;
	}

	float& operator[]( int i )
	{
		return ( ( float* )this )[i];
	}

	float operator[]( int i ) const
	{
		return ( ( float* )this )[i];
	}

	Vector2& operator+=( const Vector2& v )
	{
		x += v.x; y += v.y; return *this;
	}

	Vector2& operator-=( const Vector2& v )
	{
		x -= v.x; y -= v.y; return *this;
	}

	Vector2& operator*=( const Vector2& v )
	{
		x *= v.x; y *= v.y; return *this;
	}

	Vector2& operator/=( const Vector2& v )
	{
		x /= v.x; y /= v.y; return *this;
	}

	Vector2& operator+=( float v )
	{
		x += v; y += v; return * this;
	}

	Vector2& operator-=( float v )
	{
		x -= v; y -= v; return *this;
	}

	Vector2& operator*=( float v )
	{
		x *= v; y *= v; return *this;
	}

	Vector2& operator/=( float v )
	{
		x /= v; y /= v; return *this;
	}

	Vector2 operator+( const Vector2& v ) const
	{
		return Vector2( x + v.x, y + v.y );
	}

	Vector2 operator-( const Vector2& v ) const
	{
		return Vector2( x - v.x, y - v.y );
	}

	Vector2 operator*( const Vector2& v ) const
	{
		return Vector2( x * v.x, y * v.y );
	}

	Vector2 operator/( const Vector2& v ) const
	{
		return Vector2( x / v.x, y / v.y );
	}

	Vector2 operator+( float v ) const
	{
		return Vector2( x + v, y + v );
	}

	Vector2 operator-( float v ) const
	{
		return Vector2( x - v, y - v );
	}

	Vector2 operator*( float v ) const
	{
		return Vector2( x * v, y * v );
	}

	Vector2 operator/( float v ) const
	{
		return Vector2( x / v, y / v );
	}

	void Set( float X = 0.0f, float Y = 0.0f )
	{
		x = X; y = Y;
	}

	float Length( void ) const
	{
		return sqrtf( x * x + y * y );
	}

	float LengthSqr( void ) const
	{
		return ( x * x + y * y );
	}


	float DistTo( const Vector2& v ) const
	{
		return ( *this - v ).Length( );
	}

	float DistToSqr( const Vector2& v ) const
	{
		return ( *this - v ).LengthSqr( );
	}

	float Dot( const Vector2& v ) const
	{
		return ( x * v.x + y * v.y  );
	}

	bool IsZero( void ) const
	{
		return ( x > -0.01f && x < 0.01f &&
			y > -0.01f && y < 0.01f );
	}

public:
	float x, y;
};

class Vector3
{
public:
	Vector3( void )
	{
		x = y = z = 0.0f;
	}

	Vector3( float X, float Y, float Z )
	{
		x = X; y = Y; z = Z;
	}

	Vector3( float* v )
	{
		x = v[0]; y = v[1]; z = v[2];
	}

	Vector3( const float* v )
	{
		x = v[0]; y = v[1]; z = v[2];
	}

	Vector3( const Vector3& v )
	{
		x = v.x; y = v.y; z = v.z;
	}

	Vector3( const Vector2& v )
	{
		x = v.x; y = v.y; z = 0.0f;
	}

	Vector3& operator=( const Vector3& v )
	{
		x = v.x; y = v.y; z = v.z; return *this;
	}

	Vector3& operator=( const Vector2& v )
	{
		x = v.x; y = v.y; z = 0.0f; return *this;
	}

	float& operator[]( int i )
	{
		return ( ( float* )this )[i];
	}

	float operator[]( int i ) const
	{
		return ( ( float* )this )[i];
	}

	Vector3& operator+=( const Vector3& v )
	{
		x += v.x; y += v.y; z += v.z; return *this;
	}

	Vector3& operator-=( const Vector3& v )
	{
		x -= v.x; y -= v.y; z -= v.z; return *this;
	}

	Vector3& operator*=( const Vector3& v )
	{
		x *= v.x; y *= v.y; z *= v.z; return *this;
	}

	Vector3& operator/=( const Vector3& v )
	{
		x /= v.x; y /= v.y; z /= v.z; return *this;
	}

	Vector3& operator+=( float v )
	{
		x += v; y += v; z += v; return * this;
	}

	Vector3& operator-=( float v )
	{
		x -= v; y -= v; z -= v; return *this;
	}

	Vector3& operator*=( float v )
	{
		x *= v; y *= v; z *= v; return *this;
	}

	Vector3& operator/=( float v )
	{
		x /= v; y /= v; z /= v; return *this;
	}

	Vector3 operator+( const Vector3& v ) const
	{
		return Vector3( x + v.x, y + v.y, z + v.z );
	}

	Vector3 operator-( const Vector3& v ) const
	{
		return Vector3( x - v.x, y - v.y, z - v.z );
	}

	Vector3 operator*( const Vector3& v ) const
	{
		return Vector3( x * v.x, y * v.y, z * v.z );
	}

	Vector3 operator/( const Vector3& v ) const
	{
		return Vector3( x / v.x, y / v.y, z / v.z );
	}

	Vector3 operator+( float v ) const
	{
		return Vector3( x + v, y + v, z + v );
	}

	Vector3 operator-( float v ) const
	{
		return Vector3( x - v, y - v, z - v );
	}

	Vector3 operator*( float v ) const
	{
		return Vector3( x * v, y * v, z * v );
	}

	Vector3 operator/( float v ) const
	{
		return Vector3( x / v, y / v, z / v );
	}

	void Set( float X = 0.0f, float Y = 0.0f, float Z = 0.0f )
	{
		x = X; y = Y; z = Z;
	}

	float Length( void ) const
	{
		return sqrtf( x * x + y * y + z * z );
	}

	float LengthSqr( void ) const
	{
		return ( x * x + y * y + z * z );
	}

	float Length2d( void ) const
	{
		return sqrtf( x * x + y * y );
	}

	float Length2dSqr( void ) const
	{
		return ( x * x + y * y );
	}

	float DistTo( const Vector3& v ) const
	{
		return ( *this - v ).Length( );
	}

	float DistToSqr( const Vector3& v ) const
	{
		return ( *this - v ).LengthSqr( );
	}

	float Dot( const Vector3& v ) const
	{
		return ( x * v.x + y * v.y + z * v.z );
	}

	Vector3 Cross( const Vector3& v ) const
	{
		return Vector3( y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x );
	}

	bool IsZero( void ) const
	{
		return ( x > -0.01f && x < 0.01f &&
			y > -0.01f && y < 0.01f &&
			z > -0.01f && z < 0.01f );
	}

public:
	float x, y, z;
};

FORCEINLINE Vector3 operator*( float f, const Vector3& v )
{
	return v * f;
}