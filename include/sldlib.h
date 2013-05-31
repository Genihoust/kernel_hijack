#include <linux/socket.h>

struct sld_key_alias {
  char *alias;
  uint32_t key;  
};

struct sld_conn_handler {
  int socket;
};
