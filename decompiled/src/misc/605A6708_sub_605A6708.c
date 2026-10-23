/* sub_605A6708
 * address: 0x605A6708   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605A6708(int a1, _DWORD *a2, float result)
{
  bool v4; // zf
  int v5; // r4
  int v6; // r7
  char v7; // r12
  char v8; // r12
  StateActor *v9; // r5
  int v10; // r0
  bool v11; // zf
  int v12; // r1
  int v13; // r10
  _DWORD *v14; // r6
  int v15; // r8
  float v16; // r7
  float v17; // r9
  int v18; // r11
  float v19; // s16
  int v20; // r1
  int v21; // r4
  float v22; // s0
  float v23[14]; // [sp+8h] [bp-38h] BYREF

  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( !v4 )
  {
    v5 = FIELD_U32(a1, 144);
    v6 = (*(int (__fastcall **)(_DWORD *))(*a2 + 32))(a2);
    if ( ((unsigned int)&dword_60CB0078 & ~(1616537432 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0078) )
    {
      dword_60CB0074 = (int)&off_60BC8348;
      _cxa_guard_release(&dword_60CB0078);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CB0074) == 1 )
    {
      v9 = (StateActor *)v6;
      v10 = FIELD_U8(v6, 533);
      v11 = v10 == 0;
      if ( FIELD_U8(v6, 533) )
        v11 = v10 == 3;
      if ( !v11 && (unsigned __int8)(v10 - 1) <= 1u )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1616537584 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( !(**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) )
          v6 = 0;
        result = *(float *)(sub_6075F950(v6) + 4);
        v12 = a2[551];
        v13 = FIELD_U8(v6, 84);
        v14 = (_DWORD *)(v5 + 89652);
        v15 = FIELD_U32(v12, 8);
        v16 = *(float *)v12;
        v17 = FIELD_F32(v5, 112);
        if ( FIELD_U32(v5, 89652) )
        {
          if ( FIELD_U8(v5, 89672) == v13 )
            return result;
          v14 = (_DWORD *)(v5 + 89680);
          if ( FIELD_U32(v5, 89680) )
          {
            if ( FIELD_U8(v5, 89700) == v13 )
              return result;
            v14 = (_DWORD *)(v5 + 89708);
            if ( FIELD_U32(v5, 89708) )
            {
              if ( FIELD_U8(v5, 89728) == v13 )
                return result;
              v14 = (_DWORD *)(v5 + 89736);
              if ( FIELD_U32(v5, 89736) )
                return result;
              v18 = 3;
            }
            else
            {
              v18 = 2;
            }
          }
          else
          {
            v18 = 1;
          }
        }
        else
        {
          v18 = 0;
        }
        v19 = result - FIELD_F32(v12, 4);
        if ( v16 >= FIELD_F32(v5, 108) )
          v23[0] = *(float *)v12;
        else
          v23[0] = v16 + 6.0;
        v23[1] = v17;
        sub_60716054(TileMgr_instance, v23, 0);
        *v14 = 20;
        v20 = v5 + 28 * v18;
        FIELD_U32(v20, 89656) = FIELD_U32(v5, 89760);
        FIELD_F32(v20, 89660) = v16;
        FIELD_F32(v20, 89664) = v17;
        FIELD_U32(v20, 89668) = v15;
        FIELD_U8(v20, 89672) = v13;
        FIELD_U32(v5, 89780) = -1063256064;
        v21 = v5 + 89780;
        FIELD_U32(v21, 4) = 1084227584;
        FIELD_F32(v21, 8) = v19 + 16.0;
        CollisionMgr_init((CollisionMgr *)(v21 - 89132), v9, 0, 0, 0);
        *(_DWORD *)(v21 - 86588) |= 0x40000004u;
        CollisionMgr_setSensor((CollisionMgr *)(v21 - 89132), (CollisionMgr_Sensor *)v21, 2);
        return CollisionMgr_process((_BYTE *)(v21 - 89132), v22);
      }
    }
  }
  return result;
}
