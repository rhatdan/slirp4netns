#ifndef SLIRP4NETNS_API_H
# define SLIRP4NETNS_API_H
int api_bindlisten(const char *api_socket);
struct api_ctx;
struct slirp_config;
struct api_ctx *api_ctx_alloc(struct slirp_config *cfg);
void api_ctx_free(struct api_ctx *ctx);
int api_handler(Slirp * slirp, int listenfd, struct api_ctx *ctx);
#endif
