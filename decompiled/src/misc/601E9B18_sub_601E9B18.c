/* sub_601E9B18
 * address: 0x601E9B18   size: 1024   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E9B18(int a1, int a2)
{
  int *v3; // r7
  char v4; // r12
  int *v5; // r8
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int (__fastcall ***v10)(_DWORD, int *); // r4
  char v11; // r12
  int v12; // r5
  int v13; // r1
  int (__fastcall ***v14)(_DWORD, int *); // r4
  char v15; // r12
  int v16; // r6
  int v17; // r5
  int (__fastcall ***v18)(_DWORD, int *); // r4
  char v19; // r12
  bool v20; // zf
  int v22; // [sp+0h] [bp-B8h]
  int v23; // [sp+4h] [bp-B4h]
  ActorBuildInfo v24; // [sp+10h] [bp-A8h] BYREF
  _DWORD v25[30]; // [sp+40h] [bp-78h] BYREF

  v25[0] = 0;
  memset(&v25[2], 0, 72);
  sub_601905DC(v25);
  v25[0] = a2;
  v25[1] = sub_601916C8(dword_60C8996C, a2);
  if ( (unsigned int)(a2 - 52) <= 5 )
  {
    if ( ((1 << (a2 - 52)) & 0x36) != 0 )
      goto LABEL_26;
    v22 = a2;
    v3 = (int *)sub_601693A0(892);
    v5 = *(int **)(ActorMgr__instance + 27180);
    v23 = 0;
    do
    {
      v6 = *v3;
      if ( ((unsigned int)&dword_60C899BC & ~(1612618748 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C899BC) )
      {
        dword_60C899B8 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C899BC);
      }
      if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C899B8) == 1 )
      {
        v7 = FIELD_U32(v6, 240);
        v8 = v7 == 7;
        if ( v7 == 7 )
          v8 = FIELD_U32(v6, 244) == 0;
        if ( v8 )
        {
          v9 = v23 + 2;
          if ( (unsigned int)(v23 + 2) >= 0x12 )
            v9 = 0;
          ++v23;
          v25[v9 + 2] = FIELD_U32(v6, 8);
        }
      }
      v3 = (int *)sub_601693C0(892, (int)(v3 + 1));
    }
    while ( v3 != v5 );
    v10 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(878);
    if ( ((unsigned int)&dword_60C8AF50 & ~(1612618948 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF50) )
    {
      dword_60C8AF4C = (int)&off_60BD6B64;
      _cxa_guard_release(&dword_60C8AF50);
    }
    v12 = (int)(v10 + 2);
    a2 = v22;
    if ( !(**v10)(v10, &dword_60C8AF4C) )
      v12 = 8;
    v13 = v23 + 2;
    if ( (unsigned int)(v23 + 2) >= 0x12 )
      v13 = 0;
    v25[v13 + 2] = *(_DWORD *)v12;
    if ( (unsigned int)(v22 - 53) <= 4 && v22 != 55 )
    {
LABEL_26:
      v14 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(868);
      if ( ((unsigned int)dword_60C8B194 & ~(1612619136 << v15) & 1) == 0 && _cxa_guard_acquire(dword_60C8B194) )
      {
        dword_60C8B190 = (int)&off_60BD4E08;
        _cxa_guard_release(dword_60C8B194);
      }
      v16 = (int)(v14 + 2);
      v17 = 8;
      if ( !(**v14)(v14, &dword_60C8B190) )
        v16 = 8;
      v25[4] = *(_DWORD *)v16;
      v18 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(878);
      if ( ((unsigned int)&dword_60C8AF50 & ~(1612619280 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF50) )
      {
        dword_60C8AF4C = (int)&off_60BD6B64;
        _cxa_guard_release(&dword_60C8AF50);
      }
      if ( (**v18)(v18, &dword_60C8AF4C) )
        v17 = (int)(v18 + 2);
      v20 = a2 == 56;
      if ( a2 != 56 )
        v20 = a2 == 53;
      v25[6] = *(_DWORD *)v17;
      if ( v20 )
      {
        memset(&v24, 0, sizeof(v24));
        v24.eventId2 = 7;
        *(_WORD *)&v24.field_20 = 0;
        v24.movementId = 0;
        memset(&v24.position, 0, sizeof(v24.position));
        v24.profile = Profile__get(0x374u);
        v25[5] = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v24, 0) + 2);
      }
    }
  }
  return sub_60191160((_DWORD *)dword_60C8996C, v25);
}
