/* sub_605777CC
 * address: 0x605777CC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605777CC(int a1)
{
  char v2; // r12
  int v3; // r5
  float v4; // s0
  int v5; // r5
  float v6; // r1
  float v7; // s2
  float *v8; // r3
  int v9; // r0

  FIELD_U32(a1, 7388) = 3;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = 0;
  sub_60579AE4(a1);
  v3 = 2;
  if ( !sub_605D00B8(a1) )
  {
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    v4 = FIELD_F32(a1, 112) + -8.0;
    FIELD_F32(a1, 112) = v4;
    FIELD_U32(a1, 7300) = 0;
    FIELD_U32(a1, 7304) = 0;
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    FIELD_U8(a1, 7481) = FIELD_U32(a1, 20) & 1;
    FIELD_F32(a1, 7368) = v4;
    FIELD_U16(a1, 7376) = 0;
    v5 = FIELD_U32(a1, 56);
    if ( ((unsigned int)&dword_60C9D3DC & ~(1616345220 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
    {
      dword_60C9D3D8 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C9D3DC);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C9D3D8) == 1 )
    {
      v6 = FIELD_F32(v5, 7800);
      FIELD_F32(a1, 108) = v6;
      v7 = FIELD_F32(v5, 7804);
      FIELD_F32(a1, 112) = v7;
      FIELD_U32(a1, 116) = FIELD_U32(v5, 7808);
      FIELD_F32(a1, 112) = v7 + 6.0;
      v8 = (float *)&unk_60B04CE0;
      if ( !FIELD_U8(a1, 7481) )
        v8 = (float *)&unk_60B04CDC;
      FIELD_F32(a1, 108) = v6 + *v8;
      v9 = FIELD_U32(v5, 8176);
      FIELD_U32(a1, 144) = v9;
      FIELD_U32(a1, 148) = v9;
      FIELD_U32(a1, 152) = v9;
    }
    v3 = 1;
    sub_6057A244(a1, 1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
  }
  return v3;
}
