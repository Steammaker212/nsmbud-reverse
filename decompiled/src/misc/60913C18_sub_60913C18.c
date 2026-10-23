/* sub_60913C18
 * address: 0x60913C18   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913C18(int a1)
{
  int v2; // r5
  int v3; // r0
  _BYTE *v4; // r6
  char v5; // r0
  void *v6; // r0

  *(_DWORD *)a1 = off_60C5D4E4;
  v2 = a1 + 4;
  if ( !FIELD_U32(a1, 4) )
  {
    if ( (FIELD_U8(a1, 20) & 2) == 0 )
      return a1;
    goto LABEL_10;
  }
  v3 = FIELD_U32(a1, 16);
  if ( v3 )
  {
    sub_60914D38(v3, a1);
    v4 = (_BYTE *)(a1 + 20);
  }
  else
  {
    sub_60914B2C(FIELD_U32(a1, 12));
    v4 = (_BYTE *)(a1 + 20);
    if ( (FIELD_U8(a1, 20) & 3) == 0 && *(_DWORD *)v2 )
      operator_delete(*(void **)v2);
  }
  FIELD_U32(a1, 24) = 0;
  *(_DWORD *)v2 = 0;
  FIELD_U32(v2, 4) = 0;
  FIELD_U32(v2, 8) = 0;
  FIELD_U32(v2, 12) = 0;
  v5 = *v4 & 0xFE;
  *v4 = v5;
  FIELD_U16(a1, 22) = 0;
  if ( (v5 & 2) != 0 )
  {
LABEL_10:
    sub_60914B2C(FIELD_U32(a1, 12));
    v6 = *(void **)(a1 + 12);
    if ( v6 )
      operator_delete(v6);
    FIELD_U32(a1, 12) = 0;
  }
  return a1;
}
