/* sub_600B9930
 * address: 0x600B9930   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600B9930(int a1)
{
  char v1; // r12
  unsigned int *v3; // r6
  int (__fastcall ***v4)(_DWORD, int *); // r5
  unsigned int v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r0
  float *v8; // r0
  float v9; // s2
  float v10; // s0
  int (__fastcall ***v11)(_DWORD, int *); // r5
  char v12; // r12
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r1

  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 6444) = -1073741824;
  v3 = (unsigned int *)(a1 + 6444);
  v4 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C836A8 & ~(1611372908 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C836A8) )
  {
    dword_60C836A4 = (int)&off_60BC9BA0;
    _cxa_guard_release(&dword_60C836A8);
  }
  if ( v4 && (**v4)(v4, &dword_60C836A4) == 1 )
  {
    v5 = *v3;
    if ( FIELD_U32(a1, 6452) )
      v6 = v5 - 0x20000000;
    else
      v6 = v5 + 0x20000000;
LABEL_21:
    *v3 = v6;
    return;
  }
  v7 = FIELD_U32(a1, 6188);
  if ( v7 >= 4 )
    v7 = 0;
  v8 = *(float **)(PlayerMgr_instance + 4 * v7 + 32);
  v9 = v8[27] + v8[143];
  FIELD_F32(a1, 6192) = v9;
  v10 = v8[28] + v8[144];
  FIELD_F32(a1, 6196) = v10;
  FIELD_F32(a1, 6200) = v8[29] + v8[145];
  *v3 = sub_6000F7B8(v10 - FIELD_F32(a1, 112), v9 - FIELD_F32(a1, 108));
  v11 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C836B8 & ~(1611373188 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C836B8) )
  {
    dword_60C836B4 = (int)&off_60BC9BA0;
    _cxa_guard_release(&dword_60C836B8);
  }
  if ( v11 )
  {
    if ( (**v11)(v11, &dword_60C836B4) == 1 )
    {
      v13 = FIELD_U32(a1, 6452);
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          v14 = *v3;
          v15 = 357913941;
        }
        else
        {
          v14 = *v3;
          v15 = -357913941;
        }
        v6 = v14 + v15;
        goto LABEL_21;
      }
    }
  }
}
