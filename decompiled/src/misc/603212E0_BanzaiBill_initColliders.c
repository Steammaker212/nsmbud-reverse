/* BanzaiBill_initColliders
 * address: 0x603212E0   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BanzaiBill_initColliders(BulletBillTemp *this)
{
  unsigned int settings1; // r2
  char *v3; // r6
  ActiveCollider *p_aCollider; // r0
  int v5; // r0
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s6
  CollisionMgr *v10; // r0
  int *v11; // r0
  int v12; // r12
  int *v13; // r3
  int v14; // lr
  int *v15; // r7
  int *v16; // r2
  int v17; // r9
  int v18; // r5
  int v19; // r8
  float v20; // s0
  int *v21; // r1
  int v22; // s2

  (*(void (__fastcall **)(BulletBillTemp *))(FIELD_U32(this, 0x0) + 0x278))(this);
  FIELD_F32(this, 0x1EC) = 0.0;
  FIELD_U32(this, 0x1F0) = 0;
  FIELD_U32(this, 0x1804) |= 2u;
  settings1 = FIELD_U32(this, 0x14);
  *(_DWORD *)FIELD_U8(this, 0x189C) = settings1 & 0xF;
  *(_DWORD *)&FIELD_U8(this, 0x189C)[4] = (unsigned __int8)settings1 >> 4;
  *(_DWORD *)&FIELD_U8(this, 0x189C)[60] = (settings1 >> 20) & 1;
  *(_DWORD *)&FIELD_U8(this, 0x189C)[64] = (settings1 >> 21) & 1;
  *((_DWORD *)this + 1833) = (unsigned __int16)settings1 >> 12;
  *((_BYTE *)this + 0x32D8) = 0;
  v3 = &FIELD_U8(this, 0x189C)[8];
  p_aCollider = &FIELD_U32(this, 0xBC);
  if ( *(_DWORD *)&FIELD_U8(this, 0x189C)[8] )
  {
    ActiveCollider__init(p_aCollider, &FIELD_U32(this, 0x0), &stru_60BEB334, (int)this + 0x32FC);
    goto LABEL_9;
  }
  ActiveCollider__init(p_aCollider, &FIELD_U32(this, 0x0), &stru_60BEB284, (int)this + 0x32FC);
  ActiveCollider__init(&FIELD_U32(this, 0x18E0), &FIELD_U32(this, 0x0), &stru_60BEB2B0, (int)this + 0x32FC);
  ActiveCollider__init(&FIELD_U32(this, 0x1A14), &FIELD_U32(this, 0x0), &stru_60BEB2DC, 0);
  ActiveCollider__init(&FIELD_U32(this, 0x1B44), &FIELD_U32(this, 0x0), &stru_60BEB308, 0);
  v5 = *(_DWORD *)&FIELD_U8(this, 0x189C)[4];
  if ( !v5 )
  {
    v6 = 14.0;
    v7 = -12.0;
    v8 = 27.0;
    v9 = -10.0;
    goto LABEL_7;
  }
  if ( v5 == 1 )
  {
    v6 = -14.0;
    v7 = 12.0;
    v8 = -27.0;
    v9 = 10.0;
LABEL_7:
    FIELD_F32(this, 0x130) = v9;
    FIELD_F32(this, 0x1954) = v8;
    FIELD_F32(this, 0x1958) = 0.0;
    FIELD_F32(this, 0x1BB8) = v7;
    FIELD_F32(this, 0x1A88) = v6;
    FIELD_F32(this, 0x1A90) = 29.0;
    FIELD_F32(this, 0x1A94) = 29.0;
    FIELD_F32(this, 0x1BC0) = 29.0;
    FIELD_F32(this, 0x1BC4) = 31.0;
  }
  BanzaiBill_initColliders_helper((int)this);
  *((_DWORD *)this + 1914) = 30;
LABEL_9:
  if ( *(_DWORD *)v3 == 1 )
  {
    v10 = (CollisionMgr *)((char *)this + 7664);
    if ( *(_DWORD *)&FIELD_U8(this, 0x189C)[12] == 1 )
    {
      CollisionMgr_init(v10, (StateActor *)this, &stru_60AFF70C, &stru_60AFF700, &stru_60AFF718);
      v11 = (int *)((char *)this + 10216);
      v12 = *((_DWORD *)this + 2554) | 0x10000800;
      *((_DWORD *)this + 2554) = v12;
      v13 = (int *)((char *)this + 10208);
      v14 = *((_DWORD *)this + 2552) | 0x10000800;
      *((_DWORD *)this + 2552) = v14;
      v15 = (int *)((char *)this + 10192);
      v16 = (int *)((char *)this + 10200);
      v17 = *((_DWORD *)this + 2550);
      v18 = *((_DWORD *)this + 2548) | 0x10000800;
      *((_DWORD *)this + 2548) = v18;
      v19 = v17 | 0x10000800;
      *((_DWORD *)this + 2550) = v17 | 0x10000800;
    }
    else
    {
      CollisionMgr_init(v10, (StateActor *)this, 0, 0, &stru_60AFF724);
      v11 = (int *)((char *)this + 10216);
      v12 = *((_DWORD *)this + 2554);
      v16 = (int *)((char *)this + 10200);
      v19 = *((_DWORD *)this + 2550);
      v15 = (int *)((char *)this + 10192);
      v18 = *((_DWORD *)this + 2548);
      v13 = (int *)((char *)this + 10208);
      v14 = *((_DWORD *)this + 2552);
    }
    *v11 = v12 | 0x40000000;
    *v13 = v14 | 0x40000000;
    *v15 = v18 | 0x40000000;
    *v16 = v19 | 0x40000000;
  }
  if ( (FIELD_U32(this, 0x18) & 0xF0) != 0 )
  {
    v20 = 3700.0;
  }
  else
  {
    v21 = dword_60321664;
    if ( *(_DWORD *)v3 == 1 )
      v21 = &dword_60321664[1];
    v20 = *(float *)v21;
  }
  FIELD_F32(this, 0x74) = v20;
  *((double *)this + 0x65C) = ((double (__fastcall *)(char *))**((_DWORD **)this + 0xCB7))((char *)this + 0x32DC);
  *((_DWORD *)this + 0xCBA) = v22;
  (*(void (__fastcall **)(BulletBillTemp *))(FIELD_U32(this, 0x0) + 640))(this);
  return 1;
}
