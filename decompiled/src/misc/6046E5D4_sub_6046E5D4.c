/* sub_6046E5D4
 * address: 0x6046E5D4   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046E5D4(int (__fastcall **a1)(_DWORD))
{
  int v2; // r6
  int v3; // r4
  int (__fastcall ****v4)(_DWORD, int *); // r5
  char v5; // r12
  _DWORD *v6; // r6
  int (__fastcall ****v7)(_DWORD, int *); // t1
  int (__fastcall ***v8)(_DWORD, int *); // r7
  int v9; // r1
  _DWORD *v10; // r2
  unsigned int v11; // r0
  bool v12; // zf
  unsigned int v13; // r3
  _DWORD *v14; // r0
  _DWORD *v15; // r1
  int v16; // r3
  int result; // r0
  int (__fastcall **v18[2])(_DWORD); // [sp+10h] [bp-78h] BYREF
  int v19; // [sp+18h] [bp-70h] BYREF
  int v20; // [sp+1Ch] [bp-6Ch]
  _DWORD *v21; // [sp+20h] [bp-68h]
  int v22; // [sp+24h] [bp-64h] BYREF

  v19 = 0;
  v20 = 0;
  v21 = 0;
  sub_608DEB0C(&v19, 16, (int)&v22);
  v18[0] = (int (__fastcall **)(_DWORD))&off_60BFC530;
  v18[1] = a1;
  v2 = ActorMgr__instance;
  v3 = ActorMgr__instance + 27168;
  v4 = (int (__fastcall ****)(_DWORD, int *))sub_60008D1C(
                                               ActorMgr__instance + 27168,
                                               v18,
                                               *(_DWORD *)(ActorMgr__instance + 27172));
  v7 = *(int (__fastcall *****)(_DWORD, int *))(v2 + 27180);
  v6 = (_DWORD *)(v2 + 27180);
  if ( v4 != v7 )
  {
    do
    {
      if ( v19 >= v20 )
        break;
      v8 = *v4;
      if ( ((unsigned int)&dword_60C9D7E4 & ~(1615259312 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D7E4) )
      {
        dword_60C9D7E0 = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C9D7E4);
      }
      if ( v8 && (**v8)(v8, &dword_60C9D7E0) == 1 && v19 < v20 )
        v21[v19++] = v8;
      v4 = (int (__fastcall ****)(_DWORD, int *))sub_60008D1C(v3, v18, (unsigned int)(v4 + 1));
    }
    while ( v4 != (int (__fastcall ****)(_DWORD, int *))*v6 );
  }
  v9 = v19;
  if ( v19 )
  {
    v10 = v21;
    v11 = 4 * v19 - 4;
    v12 = ((v11 >> 2) & 1) == 0;
    v13 = v11 >> 2;
    v14 = v21;
    if ( v12 )
    {
      *(_BYTE *)(*v21 + 100) = 0;
      v14 = v10 + 1;
      *(_BYTE *)(*v10 + 101) = 0;
    }
    if ( v13 )
    {
      v15 = &v10[v9];
      do
      {
        *(_BYTE *)(*v14 + 100) = 0;
        *(_BYTE *)(*v14 + 101) = 0;
        *(_BYTE *)(v14[1] + 100) = 0;
        v16 = v14[1];
        v14 += 2;
        FIELD_U8(v16, 101) = 0;
      }
      while ( v14 != v15 );
    }
  }
  sub_608DEBEC(&v19, dword_60C9CF0C + 1340);
  result = v19;
  if ( v19 )
  {
    result = *v21;
    if ( *v21 )
      FIELD_U8(result, 100) = 1;
  }
  return result;
}
