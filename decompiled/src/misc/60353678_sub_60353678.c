/* sub_60353678
 * address: 0x60353678   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60353678(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5
  int v6; // r4
  unsigned int *v7; // r7
  int v8; // r0
  char v9; // r12
  int v11; // r6
  float *v12; // r0
  float v13; // s16
  float v14; // s18
  int v15; // r0
  _BYTE *v16; // r0

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C94FF8 & ~(1614100120 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C94FF8) )
  {
    dword_60C94FF4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C94FF8);
  }
  v6 = 0;
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C94FF4) == 1 )
    {
      v7 = (unsigned int *)(v4 + 6304);
      v8 = sub_60351954(FIELD_U32(v4, 6304));
      if ( v8 )
      {
        if ( !FIELD_U8(v8, 6404) )
        {
          v11 = FIELD_U32(a3, 64);
          if ( ((unsigned int)&dword_60C8E648 & ~(1614100296 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
          {
            dword_60C8E644 = (int)&off_60BDBC48;
            _cxa_guard_release(&dword_60C8E648);
          }
          if ( v11 )
          {
            if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C8E644) == 1
              && sub_605DBD64(v11) == 1
              && sub_60678E1C(v11) == 1 )
            {
              v12 = (float *)sub_605DBD7C(v11);
              if ( v12 )
              {
                v13 = (float)(v12[27] + v12[143]) - FIELD_F32(v4, 108);
                if ( sqrtf(
                       (float)((float)((float)((float)(v12[28] + v12[144]) - FIELD_F32(v4, 112))
                                     * (float)((float)(v12[28] + v12[144]) - FIELD_F32(v4, 112)))
                             + (float)(v13 * v13))
                     + 0.0) <= (float)(FIELD_F32(v11, 8132) * 0.5) )
                {
                  v14 = FIELD_F32(v4, 120);
                  v15 = sub_60351954(*v7);
                  if ( (float)(v13 * v14) <= 0.0 )
                  {
                    if ( v15 )
                    {
LABEL_22:
                      v16 = (_BYTE *)sub_60351954(*v7);
                      v6 = 1;
                      v16[6404] = 1;
                      (*(void (**)(void))(*(_DWORD *)v16 + 192))();
                      return v6;
                    }
                  }
                  else if ( v15 )
                  {
                    goto LABEL_22;
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
