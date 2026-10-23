/* sub_60140F90
 * address: 0x60140F90   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60140F90(int a1, unsigned int a2)
{
  float v4; // s2
  float v5; // s0
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  _DWORD v12[9]; // [sp+14h] [bp-24h] BYREF

  if ( a2 != 2 )
    goto LABEL_20;
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(dword_60CC6484, 120);
  if ( v4 <= v5 && v4 >= FIELD_F32(dword_60CC6484, 112) )
  {
    if ( FIELD_U32(AreaTask_intance, 1828) )
    {
      FIELD_F32(a1, 584) = v4;
      FIELD_U32(a1, 588) = FIELD_U32(a1, 112);
      v8 = FIELD_U32(a1, 116);
    }
    else
    {
      sub_6075DE94(dword_60CBF354, v12, FIELD_U32(a1, 6744));
      FIELD_U32(a1, 584) = v12[0];
      FIELD_U32(a1, 588) = v12[1];
      v8 = v12[2];
    }
    FIELD_U32(a1, 592) = v8;
    CollisionMgr_process((_BYTE *)(a1 + 648));
    v9 = FIELD_U32(a1, 2872);
    if ( ((v9 & 0x440000) == 0 || (v9 & 0x10000000) != 0)
      && ((v9 & 0x880000) == 0 || (v9 & 0x20000000) != 0)
      && (v9 & 0x10400) != 0x400 )
    {
      if ( (v9 & 1) == 0 )
      {
LABEL_20:
        CollisionActor__afterCreate((CollisionActor *)a1, a2);
        return;
      }
      v10 = sub_6014C508(a1 + 648, FIELD_U32(a1, 80));
      if ( (float)(*(float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0))
                 + (float)((float)((float)(v10 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v10 >> 20) & 0xFF0)))
                         * 0.000000059605)) < (float)(*(float *)((char *)sinLutTable
                                                               + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4)
                                                                                            / 180.0) >> 20)
                                                                & 0xFF0))
                                                    + (float)((float)((float)((int)(float)((float)(2147500000.0 * 63.4)
                                                                                         / 180.0)
                                                                            & 0xFFFFFF)
                                                                    * *(float *)((char *)&sinLutTable[1]
                                                                               + (((unsigned int)(int)(float)((float)(2147500000.0 * 63.4) / 180.0) >> 20)
                                                                                & 0xFF0)))
                                                            * 0.000000059605)) )
      {
        StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87D84);
        goto LABEL_20;
      }
    }
    v11 = FIELD_U32(a1, 6112);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6108);
    FIELD_U32(a1, 112) = v11;
    FIELD_U32(a1, 116) = 1166843904;
    SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
    LightSource_update1((LightSource *)(a1 + 6356), 1, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
    goto LABEL_20;
  }
  if ( FIELD_U32(AreaTask_intance, 1828) )
  {
    if ( v4 > v5 )
      v5 = FIELD_F32(dword_60CC6484, 112);
    FIELD_F32(a1, 108) = v5;
    v6 = FIELD_U32(a1, 112);
    v7 = FIELD_U32(a1, 116);
    FIELD_F32(a1, 584) = v5;
    FIELD_U32(a1, 588) = v6;
    FIELD_U32(a1, 592) = v7;
    FIELD_F32(a1, 608) = v5;
    FIELD_U32(a1, 612) = v6;
    FIELD_U32(a1, 616) = v7;
    CollisionActor__afterCreate((CollisionActor *)a1, 2u);
  }
  else
  {
    CollisionActor__afterCreate((CollisionActor *)a1, 2u);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87DEC);
  }
}
