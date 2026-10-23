/* sub_601C182C
 * address: 0x601C182C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C182C(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r1
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  _DWORD v9[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( (a1[66] | 1) != 7 )
  {
    if ( sub_601C4774(a1, a2) != 1 )
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    v5 = sub_601CF9C0(dword_60C8AEF0);
    result = a1[263];
    if ( result == 10 )
    {
      result = sub_601C42A8(a1, v4);
      if ( result != 1 )
        return result;
      a1[45] = FIELD_U32(v5, 180);
      *((_BYTE *)a1 + 328) = 1;
      (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
      result = 100;
      goto LABEL_17;
    }
    if ( result == 1 )
    {
      v7 = a1[261];
      if ( v7 >= 1 )
      {
        result = v7 - 1;
        a1[261] = result;
        return result;
      }
    }
    else
    {
      if ( result )
        return result;
      v6 = sub_601D05D4(dword_60C8AEF0);
      if ( v6 )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 68))(v6);
        if ( result != 1 )
          return result;
        a1[261] = 10;
        result = 1;
        goto LABEL_17;
      }
    }
    v8 = sub_601CF9C0(dword_60C8AEF0);
    memset(v9, 255, 12);
    sub_6019EC34(v9, (_DWORD *)(v8 + 1032));
    sub_601C4288(a1, 2, v9);
    result = 10;
LABEL_17:
    a1[263] = result;
    return result;
  }
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  return result;
}
