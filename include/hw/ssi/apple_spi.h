#ifndef APPLE_SPI_H
#define APPLE_SPI_H

#include "hw/arm/xnu_dtb.h"
#include "hw/ssi/ssi.h"
#include "hw/sysbus.h"
#include "qom/object.h"

#define APPLE_SPI_MMIO_SIZE (0x4000)

#define TYPE_APPLE_SPI "apple.spi"
OBJECT_DECLARE_SIMPLE_TYPE(AppleSPIState, APPLE_SPI)

SysBusDevice *apple_spi_create(DTBNode *node);
#endif /* APPLE_SPI_H */
