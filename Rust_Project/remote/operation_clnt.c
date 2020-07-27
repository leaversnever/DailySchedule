/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "operation.h"
#include <memory.h> /* for memset */

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = {25, 0};

char **
getdir_1(void *argp, CLIENT *clnt)
{
	static char *clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, GETDIR,
				  (xdrproc_t)xdr_void, (caddr_t)argp,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
changedir_1(char **argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, CHANGEDIR,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

int *filecount_1(char **argp, CLIENT *clnt)
{
	static int clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, FILECOUNT,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)argp,
				  (xdrproc_t)xdr_int, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
openlist_1(char **argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, OPENLIST,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

struct DIRENTRY_T *
nextlist_1(char **argp, CLIENT *clnt)
{
	static struct DIRENTRY_T clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, NEXTLIST,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)argp,
				  (xdrproc_t)xdr_DIRENTRY_T, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
closelist_1(void *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, CLOSELIST,
				  (xdrproc_t)xdr_void, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
openfiletowrite_1(char **argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, openfiletowrite,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
put_nextwrite_1(struct BLOCK_T *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, put_nextwrite,
				  (xdrproc_t)xdr_BLOCK_T, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
put_closefile_1(void *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, put_closefile,
				  (xdrproc_t)xdr_void, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
get_openfiletoread_1(char **argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, get_openfiletoread,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

struct BLOCK_T *
get_nextread_1(void *argp, CLIENT *clnt)
{
	static struct BLOCK_T clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, get_nextread,
				  (xdrproc_t)xdr_void, (caddr_t)argp,
				  (xdrproc_t)xdr_BLOCK_T, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
get_closefile_1(void *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, get_closefile,
				  (xdrproc_t)xdr_void, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
rand_openfiletoread_1(char **argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, rand_openfiletoread,
				  (xdrproc_t)xdr_wrapstring, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

struct BLOCK_T *
rand_nextread_1(struct RANDOMINFO_T *argp, CLIENT *clnt)
{
	static struct BLOCK_T clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, rand_nextread,
				  (xdrproc_t)xdr_RANDOMINFO_T, (caddr_t)argp,
				  (xdrproc_t)xdr_BLOCK_T, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}

bool_t *
rand_closefile_1(void *argp, CLIENT *clnt)
{
	static bool_t clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, rand_closefile,
				  (xdrproc_t)xdr_void, (caddr_t)argp,
				  (xdrproc_t)xdr_bool, (caddr_t)&clnt_res,
				  TIMEOUT) != RPC_SUCCESS)
	{
		return (NULL);
	}
	return (&clnt_res);
}
