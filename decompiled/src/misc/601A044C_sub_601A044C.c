/* sub_601A044C
 * address: 0x601A044C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A044C(int a1)
{
  int v1; // r5
  int i; // r6
  _DWORD *v4; // r0
  int v5; // r1
  bool v6; // zf
  int v7; // r2
  _DWORD *v8; // r7
  _DWORD *v9; // r4
  _DWORD *v10; // r1
  ActorBuildInfo v12; // [sp+0h] [bp-48h] BYREF

  for ( i = 0; i != 9; ++i )
  {
    v4 = (_DWORD *)(a1 + 16 * i);
    if ( (int)v4[6] >= 1 )
    {
      v5 = v4[5];
      v6 = v5 == 0;
      if ( v5 )
      {
        v7 = v4[7];
        v1 = v5 - v7;
        v6 = v5 == v7;
      }
      if ( !v6 )
      {
        v8 = v4 + 4;
        v9 = v4 + 7;
        do
        {
          sub_60223880(v1);
          v10 = *(_DWORD **)(*v9 + v1 + 4);
          v1 = (int)v10 - *v9;
          if ( v10 == v8 )
            v1 = 0;
        }
        while ( v1 );
      }
    }
  }
  memset(&v12, 0, sizeof(v12));
  v12.profile = Profile__get(0x385u);
  ActorMgr__create((void *)ActorMgr__instance, &v12, 0);
  sub_60218EB0(dword_60C8D3F0);
  sub_601F9E6C(0);
  sub_601F9EEC(dword_60C8BF58);
  sub_6019E364(0);
  return sub_6019E40C(dword_60C89DF8);
}
