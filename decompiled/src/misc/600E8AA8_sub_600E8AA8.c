/* sub_600E8AA8
 * address: 0x600E8AA8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_600E8AA8(_DWORD *a1)
{
  _DWORD *v1; // r6
  _DWORD *v2; // r10
  char v3; // r12
  unsigned int v5; // r0
  float *result; // r0
  bool v7; // zf
  int v8; // r11
  char *v9; // r5
  float v10; // s16
  float v11; // s18
  float v12; // s20
  int v13; // r0

  v5 = a1[1781];
  if ( v5 >= 4 )
    v5 = 0;
  result = *(float **)(PlayerMgr_instance + 4 * v5 + 32);
  v7 = result == 0;
  if ( result )
  {
    v1 = (_DWORD *)a1[9];
    v2 = a1 + 8;
    v7 = v1 == a1 + 8;
  }
  if ( !v7 )
  {
    v8 = a1[11];
    v9 = (char *)v1 - v8;
    v10 = result[29] + result[145];
    v11 = result[28] + result[144];
    v12 = result[27] + result[143];
    do
    {
      if ( ((unsigned int)dword_60C81F18 & ~(1611565928 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
      {
        dword_60C81F14 = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C81F18);
      }
      v13 = (**(int (__fastcall ***)(char *, int *))v9)(v9, &dword_60C81F14);
      if ( v9 )
      {
        if ( v13 == 1 )
          (*(void (__fastcall **)(char *, float, float, float))(*(_DWORD *)v9 + 240))(v9, v12, v11, v10);
      }
      v1 = (_DWORD *)v1[1];
      v9 = (char *)v1 - v8;
      result = (float *)((char *)v2 - a1[11]);
    }
    while ( (float *)((char *)v1 - v8) != result );
  }
  return result;
}
