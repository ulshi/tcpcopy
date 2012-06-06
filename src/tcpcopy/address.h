#ifndef  _ADDRESS_H_INC
#define  _ADDRESS_H_INC


#ifdef __cplusplus
extern "C"
{
#endif

#include <xcopy.h>

	typedef struct address_node_s{
		uint32_t ip;
		uint32_t port;
		int      sock;
	}address_node_t;

	void     address_add_msg_conn(uint16_t local_port, uint32_t dst_ip, 
			   uint16_t dst_port);
	int 	 address_find_sock(uint16_t local_port);

#ifdef __cplusplus
}
#endif

#endif   /* ----- #ifndef _ADDRESS_H_INC ----- */

