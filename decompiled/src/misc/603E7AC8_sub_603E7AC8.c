/* sub_603E7AC8
 * address: 0x603E7AC8   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E7AC8(int a1)
{
  int v2; // r5
  float v3; // s2
  int v4; // r0
  int v5; // r6
  char v6; // r12
  float *v7; // r0
  float v8; // r1
  float v9; // r2
  int v10; // r7
  int v11; // r5
  float v13[12]; // [sp+0h] [bp-30h] BYREF

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 457, *(_DWORD *)(ActorMgr__instance + 27172));
  sub_603E7D14(a1, v2);
  v3 = FIELD_F32(v2, 112) + 192.0;
  v4 = dword_60CC6484;
  FIELD_F32(dword_60CC6484, 264) = FIELD_F32(v2, 108) + -165.84;
  FIELD_F32(v4, 268) = v3;
  FIELD_U32(v4, 260) = 1065353216;
  v5 = FIELD_U32(dword_60C96478, 104);
  if ( ((unsigned int)&dword_60C965B4 & ~(1614707552 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
  {
    dword_60C965B0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C965B4);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C965B0) == 1 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C97580);
  sub_603E801C(a1, v2);
  sub_603E814C(a1, v2);
  FIELD_U8(dword_60C99D88, 29) = 1;
  sub_60232E10(dword_60C8D904);
  v7 = *(float **)(a1 + 116);
  v8 = v7[27];
  v9 = v7[28];
  v13[2] = v7[29];
  v13[1] = v9;
  v13[0] = v8 + 24.0;
  v10 = FIELD_U32(dword_60CB1BE4, 36);
  if ( v10 >= 1 )
  {
    v11 = 1;
    ((void (*)(void))sub_605E9A4C)();
    v13[0] = v13[0] + 20.0;
    if ( v10 != 1 )
    {
      do
      {
        sub_605E9A4C(dword_60CB1BE4, v11++, v13, 1);
        v13[0] = v13[0] + 20.0;
      }
      while ( v10 != v11 );
    }
  }
  return sub_603E827C(a1);
}
