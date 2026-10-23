/* sub_60609110
 * address: 0x60609110   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60609110(int result)
{
  int v1; // r5
  int v2; // r10
  unsigned int *v3; // r1
  int v4; // r7
  char v5; // r12
  unsigned int v6; // r0
  int v7; // r1
  float *v8; // [sp+4h] [bp-44h]

  v1 = FIELD_U32(result, 6824);
  if ( v1 != result + 6820 )
  {
    v2 = result + 6816;
    v3 = (unsigned int *)(v1 - 4);
    v8 = (float *)(result + 7260);
    do
    {
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v3);
      result = (unsigned int)&dword_60C7B374 & ~(1616941512 << v5);
      if ( (result & 1) == 0 )
      {
        result = _cxa_guard_acquire(&dword_60C7B374);
        if ( result )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
      }
      if ( v4 )
      {
        result = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B370);
        if ( result == 1 )
        {
          v6 = FIELD_U8(v4, 84);
          v7 = 0;
          if ( v6 < 4 )
            v7 = (char)v6;
          result = *(unsigned __int8 *)(dword_60C9CF0C + 312 * v7 + 20);
          if ( (result & 1) != 0 )
            result = (*(int (__fastcall **)(int, int, int, _DWORD, float, float))(*(_DWORD *)v4 + 748))(
                       v4,
                       1,
                       1,
                       0,
                       *v8 + 0.5,
                       FIELD_F32(v4, 88));
        }
      }
      v1 = FIELD_U32(v1, 4);
      v3 = (unsigned int *)(v1 - 4);
    }
    while ( v1 - 4 != v2 );
  }
  return result;
}
