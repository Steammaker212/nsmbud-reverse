/* sub_60595FCC
 * address: 0x60595FCC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60595FCC(int a1)
{
  int v1; // r8
  int v2; // r9
  _DWORD *v3; // r6
  unsigned int v4; // r1
  int (__fastcall ***v5)(_DWORD, int *); // r4
  char v6; // r12
  int v7; // r0
  bool v8; // zf
  float v10[15]; // [sp+14h] [bp-3Ch] BYREF

  v1 = 12;
  v2 = 0;
  v3 = (_DWORD *)(a1 + 6148);
  do
  {
    v4 = v3[1];
    if ( v4 )
    {
      v5 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
      if ( ((unsigned int)&dword_60C7B410 & ~(1616470128 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
      {
        dword_60C7B40C = (int)&off_60BC00D4;
        _cxa_guard_release(&dword_60C7B410);
      }
      if ( v5 )
      {
        v7 = (**v5)(v5, &dword_60C7B40C);
        v8 = v7 == 1;
        if ( v7 == 1 )
          v8 = *v3 == 1;
        if ( v8 )
        {
          *v3 = 0;
          v10[0] = FIELD_F32(a1, 108) + flt_60B04D00[v2];
          v10[1] = FIELD_F32(a1, 112) + 25.0;
          v10[2] = 0.0;
          sub_605E22A0(v5, v10);
          sub_605E21D8(v5);
          ++v2;
        }
      }
    }
    --v1;
    v3 += 3;
  }
  while ( v1 );
}
