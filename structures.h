#include <stdint.h>

typedef enum {
    CMD_COLIS,
    CMD_ETAT,
    CMD_QUIT,
    CMD_INVALIDE
}typeCommande;

typedef struct colis {
    int id;
    char dest;
    float poids;
}colis;

typedef struct zone {
    char lettre;
    uint16_t total_colis;
    double total_poids;
}zone;

typedef struct commande {
    typeCommande type;
    colis c;
}commande;