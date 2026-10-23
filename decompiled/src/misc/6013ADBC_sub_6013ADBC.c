/* sub_6013ADBC
 * address: 0x6013ADBC   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013ADBC(int result, int a2)
{
  Actor *v2; // r6
  float *v4; // r4
  bool v5; // zf
  char v6; // r12
  char v7; // r12
  bool v8; // zf
  char v9; // r12

  if ( (FIELD_U8(a2, 148) & 2) != 0 )
  {
    v4 = *(float **)(result + 64);
    v5 = v4 == 0;
    if ( v4 )
    {
      v2 = *(Actor **)(a2 + 64);
      v5 = v2 == 0;
    }
    if ( !v5 )
    {
      if ( FIELD_U32(a2, 136) != 4 )
        FIELD_U8(result, 110) |= 2u;
      if ( Actor__getProfileId(v2) != 222 && Actor__getProfileId(v2) != 807 )
        goto LABEL_15;
      if ( ((unsigned int)&dword_60C823BC & ~(1611902532 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
      {
        dword_60C823B8 = (int)&off_60BC7C24;
        _cxa_guard_release(&dword_60C823BC);
      }
      if ( (**(int (__fastcall ***)(float *, int *))v4)(v4, &dword_60C823B8) == 1 && v4[31] < 0.0 )
      {
        v4[31] = 4.0;
        return 1082130432;
      }
      else
      {
LABEL_15:
        result = Actor__getProfileId(v2);
        v8 = result == 459;
        if ( result == 459 )
        {
          result = FIELD_U32(a2, 104);
          v8 = result == 1;
        }
        if ( !v8 )
        {
          if ( (FIELD_U32(a2, 136) | 4) == 7 || FIELD_U32(a2, 140) == 6 )
          {
            if ( ((unsigned int)&dword_60C823BC & ~(1611902736 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
            {
              dword_60C823B8 = (int)&off_60BC7C24;
              _cxa_guard_release(&dword_60C823BC);
            }
            if ( (**(int (__fastcall ***)(float *, int *))v4)(v4, &dword_60C823B8) == 1 )
            {
              (*(void (__fastcall **)(float *))(*(_DWORD *)v4 + 240))(v4);
              sub_601362A0((int)v4);
            }
          }
          result = FIELD_U32(a2, 136);
          if ( result == 6 )
          {
            result = Actor__getProfileId(v2);
            if ( result == 475 || result == 765 )
            {
              if ( ((unsigned int)&dword_60C823BC & ~(1611902932 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
              {
                dword_60C823B8 = (int)&off_60BC7C24;
                _cxa_guard_release(&dword_60C823BC);
              }
              result = (**(int (__fastcall ***)(float *, int *))v4)(v4, &dword_60C823B8);
              if ( result == 1 )
              {
                (*(void (__fastcall **)(float *))(*(_DWORD *)v4 + 240))(v4);
                return sub_601362A0((int)v4);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
