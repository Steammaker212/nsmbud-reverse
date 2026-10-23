/* sub_60996E70
 * address: 0x60996E70   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996E70(int result, int a2)
{
  int v2; // r5
  int v4; // r6
  int (__fastcall *v5)(int, int, int); // r7
  int v6; // r0
  unsigned __int16 *v7; // r5
  unsigned __int16 v8; // r1

  v2 = result;
  v4 = FIELD_U32(result, 36);
  if ( v4 )
  {
    v5 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 24);
    v6 = sub_6098BED8(*(_DWORD *)(FIELD_U32(result, 16) + 72));
    result = v5(v4, v6, a2);
    if ( result == 1 )
    {
      v7 = *(unsigned __int16 **)(FIELD_U32(v2, 36) + 12);
      (*(void (__fastcall **)(unsigned __int16 *))(*(_DWORD *)v7 + 28))(v7);
      result = v7[15];
      v8 = result & 0xBFFF;
      if ( a2 )
        v8 = result | 0x4000;
      v7[15] = v8;
    }
  }
  return result;
}
