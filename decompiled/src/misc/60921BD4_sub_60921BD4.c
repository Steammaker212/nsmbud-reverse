/* sub_60921BD4
 * address: 0x60921BD4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921BD4(int a1)
{
  int v2; // r1
  char v3; // r0
  void *v4; // r0

  *(_DWORD *)a1 = &off_60C5D70C;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 124) = 0;
  v2 = FIELD_U32(a1, 132);
  if ( v2 )
    memset(*(void **)(a1 + 136), 0, 4 * v2);
  v3 = FIELD_U8(a1, 140);
  FIELD_U8(a1, 140) = v3 & 0xFE;
  if ( (v3 & 2) != 0 )
  {
    v4 = *(void **)(a1 + 136);
    if ( v4 )
    {
      operator_delete_8DE3FC(v4);
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
    }
    FIELD_U8(a1, 140) = 0;
  }
  return a1;
}
