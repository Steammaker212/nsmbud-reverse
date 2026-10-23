/* sub_60227A9C
 * address: 0x60227A9C   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60227A9C(_DWORD *a1)
{
  int result; // r0
  int i; // r5
  int v4; // r7
  const char *v5; // r9
  int j; // r1
  const char *v7; // r4
  int k; // r1
  int (**v9)(); // [sp+14h] [bp-64h] BYREF
  const char *v10; // [sp+18h] [bp-60h]
  int v11; // [sp+1Ch] [bp-5Ch] BYREF
  const char *v12; // [sp+20h] [bp-58h]
  _BYTE v13[12]; // [sp+24h] [bp-54h] BYREF
  int v14; // [sp+30h] [bp-48h]
  int v15; // [sp+40h] [bp-38h]
  int v16; // [sp+50h] [bp-28h]

  result = a1[441];
  if ( result == 2 )
  {
    result = a1[174];
    if ( result >= 1 )
    {
      for ( i = 0; i < result; ++i )
      {
        v4 = **(_DWORD **)(a1[176] + 4 * i);
        (*(void (__fastcall **)(int *, int))(*(_DWORD *)v4 + 160))(&v11, v4);
        v9 = &sead__SafeStringBase__vtable;
        v10 = "RW3T0W3G0";
        (*(void (__fastcall **)(int *))(v11 + 12))(&v11);
        (*(void (__fastcall **)(int *))(v11 + 12))(&v11);
        v5 = v12;
        ((void (__fastcall *)(int (***)()))v9[3])(&v9);
        if ( v5 == v10 )
        {
LABEL_12:
          (*(void (__fastcall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v4 + 108))(v4, a1[193], v13);
          a1[407] = v14;
          a1[408] = v15;
          a1[409] = v16;
        }
        else
        {
          for ( j = 1; v12[j - 1] == v10[j - 1]; j += 2 )
          {
            if ( !v12[j - 1] )
              goto LABEL_12;
            if ( j >= 524289 || v12[j] != v10[j] )
              break;
            if ( !v12[j] )
              goto LABEL_12;
          }
          (*(void (__fastcall **)(int *, int))(*(_DWORD *)v4 + 160))(&v11, v4);
          v9 = &sead__SafeStringBase__vtable;
          v10 = "RW3J1W3M0";
          (*(void (__fastcall **)(int *))(v11 + 12))(&v11);
          (*(void (__fastcall **)(int *))(v11 + 12))(&v11);
          v7 = v12;
          ((void (__fastcall *)(int (***)()))v9[3])(&v9);
          if ( v7 == v10 )
          {
LABEL_21:
            (*(void (__fastcall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v4 + 108))(v4, a1[195], v13);
            a1[410] = v14;
            a1[412] = v16;
            a1[411] = 1127579648;
          }
          else
          {
            for ( k = 1; v12[k - 1] == v10[k - 1]; k += 2 )
            {
              if ( !v12[k - 1] )
                goto LABEL_21;
              if ( k >= 524289 || v12[k] != v10[k] )
                break;
              if ( !v12[k] )
                goto LABEL_21;
            }
          }
        }
        result = a1[174];
      }
    }
  }
  return result;
}
