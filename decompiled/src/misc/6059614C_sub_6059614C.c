/* sub_6059614C
 * address: 0x6059614C   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6059614C(int a1)
{
  char v1; // r12
  int v2; // r8
  int v3; // r5
  int v4; // r6
  float v5; // s26
  float v6; // s30
  int v7; // r11
  float v8; // r9
  float v9; // s24
  float v10; // s19
  float v11; // s17
  float v12; // s0
  float v13; // s0
  float v14; // s0
  float v15; // r0

  v2 = 0;
  v3 = a1 + 6112;
  do
  {
    if ( *(_BYTE *)(v3 + 8 * v2) )
    {
      v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 48);
      if ( ((unsigned int)&dword_60C7B364 & ~(1616470508 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
      {
        v5 = FIELD_F32(v4, 108);
        v6 = FIELD_F32(v4, 112);
        v7 = FIELD_U32(v4, 116);
        v8 = FIELD_F32(a1, 108);
        v9 = FIELD_F32(a1, 112) + 17.0;
        v10 = v8 - v5;
        v11 = v9 - v6;
        v12 = sqrtf((float)((float)(v11 * v11) + (float)(v10 * v10)) + 0.0);
        if ( v12 > 0.0 )
        {
          v13 = 1.0 / v12;
          v11 = v11 * v13;
          v10 = v10 * v13;
        }
        v14 = v6 + (float)(v11 + v11);
        v15 = v5 + (float)(v10 + v10);
        if ( fabsf(v8 - v15) < 3.0 && fabsf(v9 - v14) < 3.0 )
        {
          v14 = FIELD_F32(a1, 112) + 17.0;
          v7 = FIELD_U32(a1, 116);
          *(_BYTE *)(v3 + 8 * v2) = 0;
          v15 = v8;
        }
        FIELD_F32(v4, 108) = v15;
        FIELD_F32(v4, 112) = v14;
        FIELD_U32(v4, 116) = v7;
      }
    }
    ++v2;
  }
  while ( v2 != 4 );
}
