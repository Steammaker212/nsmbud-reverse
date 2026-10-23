/* sub_608D2228
 * address: 0x608D2228   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2228(int a1, int a2, int a3, float a4)
{
  int v8; // r8
  int result; // r0
  int i; // r10
  int j; // r11
  float *v12; // r0
  _DWORD *v13; // r4
  _DWORD *v14; // r1
  int v15; // r1

  v8 = (*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 52) + 4))(FIELD_U32(a1, 52), a4);
  result = FIELD_U32(a1, 92);
  if ( result >= 1 )
  {
    if ( v8 < 1 )
    {
      v15 = 0;
      if ( (result & 7) != 0 )
      {
        do
          ++v15;
        while ( (FIELD_U32(a1, 92) & 7) != v15 );
      }
      if ( (unsigned int)(result - 1) >= 7 )
      {
        do
          v15 += 8;
        while ( v15 < result );
      }
    }
    else
    {
      for ( i = 0; i < result; ++i )
      {
        for ( j = 0; j != v8; ++j )
        {
          nn__os__LockMutex(a1 + 104);
          v12 = (float *)(*(_DWORD *)(FIELD_U32(a1, 88) + 4 * (i + FIELD_U32(a1, 92) * a2))
                        + 4 * (j + FIELD_U32(a1, 100) * a3));
          if ( i == j )
          {
            *v12 = a4;
            nn__os__UnlockMutex(a1 + 104);
            v13 = sub_608C3B10();
            v14 = (_DWORD *)sub_608C2698((int)v13, 36);
            v14[1] = 75;
            v14[4] = a1;
            v14[5] = a2;
            v14[6] = i;
            v14[7] = a3;
            v14[8] = i;
          }
          else
          {
            *v12 = 0.0;
            nn__os__UnlockMutex(a1 + 104);
            v13 = sub_608C3B10();
            v14 = (_DWORD *)sub_608C2698((int)v13, 36);
            v14[1] = 75;
            v14[4] = a1;
            v14[5] = a2;
            v14[6] = i;
            v14[7] = a3;
            v14[8] = j;
          }
          sub_608C2C1C(v13, v14);
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, 1);
        }
        result = FIELD_U32(a1, 92);
      }
    }
  }
  return result;
}
