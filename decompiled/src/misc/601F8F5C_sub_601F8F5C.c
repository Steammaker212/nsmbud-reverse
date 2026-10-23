/* sub_601F8F5C
 * address: 0x601F8F5C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F8F5C(int *a1)
{
  int *v2; // r6
  int *v3; // r5
  int result; // r0
  int v5; // r5
  int a5; // [sp+0h] [bp-20h] BYREF
  int target[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 176;
  v3 = a1 + 175;
  a1[48] += a1[147];
  sub_608322C0(a1 + 45, a1 + 48, a1 + 175, a1 + 176);
  target[0] = 0x1000000;
  a5 = 0x100000;
  moveValueTo(v3, target, &a5);
  target[0] = 0x100000;
  a5 = 0x10000;
  moveValueTo(v2, target, &a5);
  sub_60168EA0((int)a1);
  result = sub_60190968(dword_60C8996C);
  if ( result == 1 )
  {
    v5 = dword_60C8996C;
    target[0] = sub_6019112C(dword_60C8996C);
    result = FIELD_U8(v5, 1384);
    if ( FIELD_U8(v5, 1384) )
    {
      result = target[0];
      if ( target[0] == 208 )
      {
        (*(void (__fastcall **)(int *))(*a1 + 352))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 348))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 72))(a1);
        result = sub_601919B0((_DWORD *)dword_60C8996C, (int)a1);
        if ( result == 1 )
        {
          *((_BYTE *)a1 + 744) = 1;
          return (int)StateMgr__changeState((StateMgr *)a1 + 18, (StateBase *)&dword_60C8BDCC);
        }
      }
    }
  }
  return result;
}
