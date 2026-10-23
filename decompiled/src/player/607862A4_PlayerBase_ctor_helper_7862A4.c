/* PlayerBase_ctor_helper_7862A4
 * address: 0x607862A4   size: 128   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_ctor_helper_7862A4(int a1)
{
  int v2; // r5

  v2 = a1 + 32;
  memset((void *)(a1 + 32), 0, 40);
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = v2;
  FIELD_U32(a1, 20) = 10;
  memset((void *)(a1 + 88), 0, 40);
  FIELD_U32(a1, 72) = a1 + 88;
  FIELD_U32(a1, 76) = 10;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U16(a1, 136) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 128) = 0;
  return a1;
}
