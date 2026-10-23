/* sub_608EACD4
 * address: 0x608EACD4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EACD4(int a1)
{
  int v2; // r0
  char v3; // r0
  int result; // r0
  _QWORD v5[2]; // [sp+0h] [bp-10h] BYREF

  if ( (FIELD_U8(a1, 346) & 3) == 1 )
    goto LABEL_11;
  v2 = FIELD_U8(a1, 348);
  if ( FIELD_U8(a1, 348) )
  {
    if ( v2 == 1 )
    {
      v3 = 1;
    }
    else
    {
      if ( v2 != 2 )
      {
LABEL_8:
        FIELD_U8(a1, 348) = 0;
        goto LABEL_9;
      }
      v3 = 0;
    }
    FIELD_U8(a1, 347) = v3;
    goto LABEL_8;
  }
LABEL_9:
  if ( FIELD_U32(a1, 40) == 1 )
    FIELD_U32(a1, 40) = 2;
LABEL_11:
  sub_608F1340(FIELD_U32(a1, 28));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 120))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 124))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 60))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 140))(a1);
  nn__os__GetSystemTick((nn__os *)v5);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 144))(a1);
  result = FIELD_U8(a1, 346);
  if ( (result & 3) != 3 )
  {
    nn__os__GetSystemTick((nn__os *)v5);
    FIELD_U64(a1, 160) = v5[0] - FIELD_U64(a1, 168);
    nn__os__GetSystemTick((nn__os *)v5);
    FIELD_U64(a1, 168) = v5[0];
    result = FIELD_U8(a1, 346);
  }
  if ( (result & 1) != 0 )
  {
    result ^= 2u;
    FIELD_U8(a1, 346) = result;
  }
  return result;
}
