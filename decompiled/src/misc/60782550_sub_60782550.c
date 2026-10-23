/* sub_60782550
 * address: 0x60782550   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *sub_60782550()
{
  _BYTE *v0; // r0

  v0 = (_BYTE *)dword_60C9CF04;
  if ( dword_60C9CF04 )
  {
    FIELD_U8(dword_60C9CF04, 16) = 0;
    v0[140] = 0;
    v0[264] = 0;
    v0[388] = 0;
    v0[512] = 0;
  }
  byte_60CC2C51 = 0;
  byte_60CC2C52 = 0;
  byte_60CC2C53 = 0;
  byte_60CC2C54 = 0;
  byte_60CC2C55 = 0;
  return &byte_60CC2C55;
}
