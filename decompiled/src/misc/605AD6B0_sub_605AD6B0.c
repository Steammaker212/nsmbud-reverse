/* sub_605AD6B0
 * address: 0x605AD6B0   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int sub_605AD6B0()
{
  unsigned int result; // r0
  int v1; // r8
  int i; // r4
  _DWORD *v3; // r0
  int v4; // r7
  int j; // r5
  int v6; // r0
  int k; // r4
  _DWORD *v8; // r0
  int v9; // r7
  int m; // r5
  int v11; // r0
  int n; // r4
  _DWORD *v13; // r0
  int v14; // r7
  int ii; // r5
  int v16; // r0

  result = dword_60C08AC4;
  v1 = FIELD_U32(dword_60C99DD4, 1052);
  if ( v1 != dword_60C08AC4 )
  {
    if ( dword_60CB01F8 >= 1 )
    {
      if ( dword_60CB01F4[0] )
      {
        for ( i = 3; i != 15; ++i )
        {
          v3 = (_DWORD *)dword_60CB01F4[i];
          if ( v3 )
          {
            v4 = v3[40];
            SE_OBJ_DAIKONBOU_LAND_ref(v3);
            *(_DWORD *)(dword_60CB01F4[i] + 6736) = *(_DWORD *)(dword_60CB01F4[i] + 160) - v4;
          }
        }
      }
      else
      {
        for ( j = 3; j != 15; ++j )
        {
          v6 = dword_60CB01F4[j];
          if ( v6 && (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 248))(v6) == 1 )
          {
            dword_60CB01FC = FIELD_U32(dword_60C99DD4, 1052);
            dword_60CB01F4[0] = 1;
          }
        }
      }
    }
    if ( dword_60CB0234 > 0 )
    {
      if ( dword_60CB0230 )
      {
        for ( k = 0; k != 12; ++k )
        {
          v8 = (_DWORD *)dword_60CB01F4[k + 18];
          if ( v8 )
          {
            v9 = v8[40];
            SE_OBJ_DAIKONBOU_LAND_ref(v8);
            *(_DWORD *)(dword_60CB01F4[k + 18] + 6736) = *(_DWORD *)(dword_60CB01F4[k + 18] + 160) - v9;
          }
        }
      }
      else
      {
        for ( m = 0; m != 12; ++m )
        {
          v11 = dword_60CB01F4[m + 18];
          if ( v11 && (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 248))(v11) == 1 )
          {
            dword_60CB0238 = FIELD_U32(dword_60C99DD4, 1052);
            dword_60CB0230 = 1;
          }
        }
      }
    }
    if ( dword_60CB0270 >= 1 )
    {
      if ( dword_60CB026C )
      {
        for ( n = 0; n != 12; ++n )
        {
          v13 = (_DWORD *)dword_60CB01F4[n + 33];
          if ( v13 )
          {
            v14 = v13[40];
            SE_OBJ_DAIKONBOU_LAND_ref(v13);
            *(_DWORD *)(dword_60CB01F4[n + 33] + 6736) = *(_DWORD *)(dword_60CB01F4[n + 33] + 160) - v14;
          }
        }
      }
      else
      {
        for ( ii = 0; ii != 12; ++ii )
        {
          v16 = dword_60CB01F4[ii + 33];
          if ( v16 && (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 248))(v16) == 1 )
          {
            dword_60CB0274 = FIELD_U32(dword_60C99DD4, 1052);
            dword_60CB026C = 1;
          }
        }
      }
    }
    dword_60C08AC4 = v1;
    return 0x65B15Cu;
  }
  return result;
}
