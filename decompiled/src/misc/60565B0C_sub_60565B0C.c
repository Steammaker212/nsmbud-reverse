/* sub_60565B0C
 * address: 0x60565B0C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60565B0C(int a1)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r0

  v2 = sub_605B4CC4(a1);
  if ( v2 )
  {
    if ( v2 == 3 || (FIELD_U32(a1, 6260) & 8) != 0 )
    {
      SE_OBJ_BLOCK_BREAK_ref(a1);
    }
    else
    {
      if ( v2 == 2 )
      {
        v3 = (int *)(a1 + 6864);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0558);
        FIELD_U8(a1, 6846) = 2;
        FIELD_U32(a1, 7380) = FIELD_U32(a1, 6904);
        v4 = 3;
        goto LABEL_9;
      }
      if ( v2 == 1 )
      {
        v3 = (int *)(a1 + 6864);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
        FIELD_U32(a1, 7380) = FIELD_U32(a1, 6904);
        FIELD_U8(a1, 6846) = 1;
        v4 = 2;
LABEL_9:
        *v3 = v4;
      }
    }
  }
  return sub_60566490(a1);
}
