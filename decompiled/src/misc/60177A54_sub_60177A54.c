/* sub_60177A54
 * address: 0x60177A54   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60177A54(int a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r0
  int v4; // r4
  _DWORD *v5; // r8
  _DWORD *v6; // r5
  int v8; // [sp+0h] [bp-28h]

  v8 = dword_60C88E68;
  if ( !dword_60C88E68 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x6814u, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60BD4F08;
    v8 = (int)v2;
    dword_60C88E64 = (int)v3;
    *v2 = &off_60BD4F18;
    v4 = 5;
    do
    {
      v2[v4] = &off_60BD4F28;
      v5 = &v2[v4];
      v5[2] = v5 + 4;
      v5[1] = &BufferedSafeStringBase_char_vtable_probably;
      v6 = &v2[v4 + 1];
      v5[3] = 5;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v6);
      v4 += 26;
      *(_BYTE *)v5[2] = 0;
      *v6 = &off_60BD4F38;
    }
    while ( v5 + 26 != v2 + 6661 );
    dword_60C88E68 = (int)v2;
  }
  return v8;
}
