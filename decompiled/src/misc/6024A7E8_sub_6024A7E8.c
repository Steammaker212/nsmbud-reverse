/* sub_6024A7E8
 * address: 0x6024A7E8   size: 1280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6024A7E8(unsigned int *a1)
{
  char v1; // r12
  int v3; // r8
  int v4; // r5
  unsigned int v5; // r1
  int v6; // r5
  unsigned int v7; // r1
  int v8; // r5
  unsigned int v9; // r1
  int v10; // r5
  _BYTE *v11; // r6
  unsigned int v12; // r5
  int v13; // r1
  float v14; // r6
  float v15; // s16
  int v16; // r4
  float v17; // r7
  _BYTE *v18; // r7
  char v19; // r12
  char v20; // r12
  ActorBuildInfo v22[2]; // [sp+4h] [bp-5Ch] BYREF

  v3 = 0;
  if ( !*a1 )
    goto LABEL_29;
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *a1);
  if ( !v4 )
    goto LABEL_29;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613015100 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8DD50) == 1 && !FIELD_U8(v4, 6324) )
    goto LABEL_29;
  v5 = a1[1];
  v3 = 1;
  if ( !v5 )
    goto LABEL_29;
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
  if ( !v6 )
    goto LABEL_29;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613015276 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8DD50) == 1 && !FIELD_U8(v6, 6324) )
    goto LABEL_29;
  v7 = a1[2];
  v3 = 2;
  if ( !v7 )
    goto LABEL_29;
  v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
  if ( !v8 )
    goto LABEL_29;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613015452 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C8DD50) == 1 && !FIELD_U8(v8, 6324) )
    goto LABEL_29;
  v9 = a1[3];
  v3 = 3;
  if ( !v9 )
    goto LABEL_29;
  v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v9);
  if ( !v10 )
    goto LABEL_29;
  if ( ((unsigned int)dword_60C8DD54 & ~(1613015628 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
  {
    dword_60C8DD50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8DD54);
  }
  v11 = 0;
  if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C8DD50) == 1 && !FIELD_U8(v10, 6324) )
  {
LABEL_29:
    v12 = a1[4];
    if ( ((unsigned int)&dword_60C8DD44 & ~(1613015760 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DD44) )
    {
      dword_60C8DD40 = (int)&off_60BDA210;
      _cxa_guard_release(&dword_60C8DD44);
    }
    v11 = 0;
    if ( v12 && (**(int (__fastcall ***)(unsigned int, int *))v12)(v12, &dword_60C8DD40) == 1 )
    {
      v13 = v12 + 12344 + 24 * ((FIELD_U8(v12, 15421) - *(_BYTE *)(v12 + 12344 + v3 + 3072)) & 0x7F);
      v14 = *(float *)v13;
      v15 = FIELD_F32(v13, 8);
      v16 = FIELD_U32(v13, 16);
      v17 = FIELD_F32(v13, 4);
      memset(&v22[0].settings2, 0, 40);
      v22[0].settings1 = v3;
      v22[0].profile = Profile__get(0x325u);
      v22[0].position.x = v14;
      v11 = 0;
      v22[0].position.y = v17;
      v22[0].position.z = v15 + (float)((float)(v3 + 1) * -10.0);
      v22[0].field_1C = v16;
      v22[0].field_20 = 0;
      v18 = ActorMgr__create((void *)ActorMgr__instance, v22, 0);
      if ( ((unsigned int)&dword_60C7B364 & ~(1613016044 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v18 && (**(int (__fastcall ***)(_BYTE *, int *))v18)(v18, &StageActor_RTTI) == 1 )
      {
        a1[v3] = *((_DWORD *)v18 + 2);
        if ( ((unsigned int)dword_60C8DD54 & ~(1613016168 << v20) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
        {
          dword_60C8DD50 = (int)&off_60BC04AC;
          _cxa_guard_release(dword_60C8DD54);
        }
        v11 = v18;
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v18)(v18, &dword_60C8DD50) == 1 )
        {
          v11 = v18;
          *((_DWORD *)v18 + 1580) = FIELD_U32(v12, 8);
        }
      }
    }
  }
  return v11;
}
