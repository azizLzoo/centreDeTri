#include <stdint.h>


typedef struct colis {
    uint8_t id;
    char dest;
    uint16_t poids;
}colis;

typedef struct zone {
    char lettre;
    uint16_t total_colis;
    uint16_t total_poids;
}zone;