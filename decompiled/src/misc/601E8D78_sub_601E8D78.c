/* sub_601E8D78
 * address: 0x601E8D78   size: 1736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E8D78()
{
  int v0; // r5
  int v1; // r1
  int *v2; // r7
  char v3; // r12
  int *v4; // r10
  int v5; // r11
  int v6; // r8
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r4
  bool v11; // zf
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r11
  char v15; // r12
  int *v16; // r7
  int *v17; // r10
  int v18; // r4
  unsigned int v19; // r0
  float v20; // r10
  float v21; // r6
  float v22; // r7
  float v23; // r4
  _BYTE *v24; // r0
  char v25; // r12
  int v26; // r1
  int v27; // r0
  float v28; // r5
  float v29; // r6
  int v30; // r5
  int v31; // r0
  __guard *v33; // [sp+10h] [bp-C0h]
  float v34; // [sp+14h] [bp-BCh]
  __guard *v35; // [sp+18h] [bp-B8h]
  ActorBuildInfo v36; // [sp+20h] [bp-B0h] BYREF
  float v37; // [sp+4Ch] [bp-84h] BYREF
  float v38; // [sp+50h] [bp-80h]
  __guard *v39; // [sp+54h] [bp-7Ch]
  _DWORD v40[30]; // [sp+58h] [bp-78h] BYREF

  v0 = FIELD_U32(dword_60CC6D78, 412);
  v40[0] = 0;
  memset(&v40[2], 0, 72);
  sub_601905DC(v40);
  v1 = 96;
  if ( v0 == 1 )
    v1 = 95;
  v40[0] = v1;
  v40[1] = sub_601916C8(dword_60C8996C, v1);
  v2 = (int *)sub_601693A0(867);
  v4 = *(int **)(ActorMgr__instance + 27180);
  if ( v0 == 1 )
  {
    v5 = 0;
    do
    {
      v6 = *v2;
      if ( ((unsigned int)&dword_60C8B0E4 & ~(1612615268 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B0E4) )
      {
        dword_60C8B0E0 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8B0E4);
      }
      if ( !v6 || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8B0E0) != 1 )
        break;
      if ( FIELD_U32(v6, 240) == 1 )
      {
        v7 = FIELD_U32(v6, 244);
        v8 = FIELD_U32(v6, 248);
        v36.settings1 = 1;
        v36.settings2 = v7;
        v36.parentId = v8;
        if ( sub_601D9E90((int)&v36) )
        {
          v9 = v5 + 2;
          FIELD_U32(v6, 296) = 1;
          ++v5;
          if ( v9 >= 0x12 )
            v9 = 0;
          v40[v9 + 2] = FIELD_U32(v6, 8);
        }
      }
      v2 = (int *)sub_601693C0(867, (int)(v2 + 1));
    }
    while ( v2 != v4 );
  }
  else
  {
    v5 = 0;
    do
    {
      v10 = *v2;
      if ( ((unsigned int)&dword_60C8B0E4 & ~(1612615540 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B0E4) )
      {
        dword_60C8B0E0 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8B0E4);
      }
      if ( !v10 || (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C8B0E0) != 1 )
        break;
      v11 = v0 == 4;
      if ( v0 == 4 )
        v11 = FIELD_U32(v10, 240) == 4;
      if ( v11 )
      {
        v12 = v5 + 2;
        ++v5;
        if ( v12 >= 0x12 )
          v12 = 0;
        v40[v12 + 2] = FIELD_U32(v10, 8);
      }
      v2 = (int *)sub_601693C0(867, (int)(v2 + 1));
    }
    while ( v2 != v4 );
  }
  v13 = v5 + 2;
  if ( (unsigned int)(v5 + 2) >= 0x12 )
    v13 = 0;
  v14 = v5 + 1;
  v40[v13 + 2] = *(_DWORD *)(*(_DWORD *)sub_601693A0(901) + 8);
  if ( v0 == 1 )
  {
    v16 = (int *)sub_601693A0(862);
    v17 = *(int **)(ActorMgr__instance + 27180);
    *(float *)&v35 = 0.0;
    v34 = 0.0;
    *(float *)&v33 = 0.0;
    do
    {
      v18 = *v16;
      if ( ((unsigned int)&dword_60C89B08 & ~(1612615908 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C89B08) )
      {
        dword_60C89B04 = (int)&off_60BD5A64;
        _cxa_guard_release(&dword_60C89B08);
      }
      if ( !v18 || (**(int (__fastcall ***)(int, int *))v18)(v18, &dword_60C89B04) != 1 )
        break;
      if ( FIELD_U32(v18, 240) == 1 )
      {
        v19 = v14 + 2;
        ++v14;
        if ( v19 >= 0x12 )
          v19 = 0;
        v40[v19 + 2] = FIELD_U32(v18, 8);
        v35 = *(__guard **)(v18 + 80);
        v34 = FIELD_F32(v18, 84);
        v33 = *(__guard **)(v18 + 88);
      }
      v16 = (int *)sub_601693C0(862, (int)(v16 + 1));
    }
    while ( v16 != v17 );
  }
  else
  {
    *(float *)&v35 = 0.0;
    v34 = 0.0;
    *(float *)&v33 = 0.0;
  }
  v37 = 0.0;
  v38 = 0.0;
  *(float *)&v39 = 0.0;
  if ( v0 == 1 )
  {
    v20 = *(float *)&v35;
    v37 = *(float *)&v35;
    v38 = v34;
    v39 = v33;
    v21 = *(float *)&v33;
    v22 = v34;
    v23 = *(float *)&v35;
  }
  else
  {
    if ( ((unsigned int)dword_60C8B1A4 & ~(1612616196 << v15) & 1) == 0 && _cxa_guard_acquire(dword_60C8B1A4) )
    {
      dword_60C8B1B4 = (int)&sead__SafeStringBase__vtable;
      dword_60C8B1B8 = (int)"Fd01";
      _cxa_guard_release(dword_60C8B1A4);
    }
    sub_601A02B0(dword_60C89E00, &v37, v0, 0, (int)&dword_60C8B1B4);
    v23 = v37;
    v22 = v38;
    v21 = *(float *)&v39;
    v20 = *(float *)&v35;
  }
  memset(&v36, 0, sizeof(v36));
  v36.eventId2 = v0;
  v36.eventId1 = 0;
  v36.field_20 = 0;
  v36.movementId = 0;
  v36.position.x = v23;
  v36.position.y = v22;
  v36.position.z = v21;
  v36.profile = Profile__get(0x377u);
  v24 = ActorMgr__create((void *)ActorMgr__instance, &v36, 0);
  v26 = v14 + 2;
  v27 = *((_DWORD *)v24 + 2);
  v37 = 0.0;
  v38 = 0.0;
  *(float *)&v39 = 0.0;
  if ( (unsigned int)(v14 + 2) >= 0x12 )
    v26 = 0;
  v40[v26 + 2] = v27;
  if ( v0 == 1 )
  {
    v28 = v34;
    v29 = *(float *)&v33;
    v37 = v20;
    v38 = v34;
    v39 = v33;
  }
  else
  {
    if ( ((unsigned int)&dword_60C8B1A4[1] & ~(1612616512 << v25) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B1A4[1]) )
    {
      dword_60C8B1BC = (int)&sead__SafeStringBase__vtable;
      dword_60C8B1C0 = (int)"W1T0";
      _cxa_guard_release(&dword_60C8B1A4[1]);
    }
    sub_601A02B0(dword_60C89E00, &v37, 0, 0, (int)&dword_60C8B1BC);
    v20 = v37;
    v28 = v38;
    v29 = *(float *)&v39;
  }
  memset(&v36, 0, sizeof(v36));
  v36.position.x = v20;
  v36.position.y = v28;
  v36.position.z = v29;
  v36.profile = Profile__get(0x388u);
  v30 = 0;
  v31 = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v36, 0) + 2);
  if ( (unsigned int)(v14 + 3) < 0x12 )
    v30 = v14 + 3;
  v40[v30 + 2] = v31;
  return sub_60191160((_DWORD *)dword_60C8996C, v40);
}
