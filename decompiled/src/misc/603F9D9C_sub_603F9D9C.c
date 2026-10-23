/* sub_603F9D9C
 * address: 0x603F9D9C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int sub_603F9D9C()
{
  unsigned int v0; // r4
  int Area; // r0
  int v2; // r1
  unsigned int v3; // r5
  _BYTE *v4; // r0
  int v5; // r0
  int v6; // r1
  _BYTE *v7; // r0
  int v8; // r0
  int v9; // r1
  _BYTE *v10; // r0
  int v11; // r0
  int v12; // r1
  _BYTE *v13; // r0

  v0 = 0;
  Area = Level_getArea(Level_instance, 0);
  if ( Area )
  {
    v2 = FIELD_U32(Area, 148);
    v3 = 0;
    if ( v2 >= 1 )
    {
      v3 = 0;
      v0 = 0;
      v4 = (_BYTE *)(FIELD_U32(Area, 28) + 19);
      do
      {
        if ( *v4 )
        {
          ++v0;
          if ( v3 <= (unsigned __int8)*v4 )
            v3 = (unsigned __int8)*v4;
        }
        v4 += 24;
        --v2;
      }
      while ( v2 );
    }
  }
  else
  {
    v3 = 0;
  }
  v5 = Level_getArea(Level_instance, 1u);
  if ( v5 )
  {
    v6 = FIELD_U32(v5, 148);
    if ( v6 >= 1 )
    {
      v7 = (_BYTE *)(FIELD_U32(v5, 28) + 19);
      do
      {
        if ( *v7 )
        {
          ++v0;
          if ( v3 <= (unsigned __int8)*v7 )
            v3 = (unsigned __int8)*v7;
        }
        v7 += 24;
        --v6;
      }
      while ( v6 );
    }
  }
  v8 = Level_getArea(Level_instance, 2u);
  if ( v8 )
  {
    v9 = FIELD_U32(v8, 148);
    if ( v9 >= 1 )
    {
      v10 = (_BYTE *)(FIELD_U32(v8, 28) + 19);
      do
      {
        if ( *v10 )
        {
          ++v0;
          if ( v3 <= (unsigned __int8)*v10 )
            v3 = (unsigned __int8)*v10;
        }
        v10 += 24;
        --v9;
      }
      while ( v9 );
    }
  }
  v11 = Level_getArea(Level_instance, 3u);
  if ( v11 )
  {
    v12 = FIELD_U32(v11, 148);
    if ( v12 >= 1 )
    {
      v13 = (_BYTE *)(FIELD_U32(v11, 28) + 19);
      do
      {
        if ( *v13 )
        {
          ++v0;
          if ( v3 <= (unsigned __int8)*v13 )
            v3 = (unsigned __int8)*v13;
        }
        v13 += 24;
        --v12;
      }
      while ( v12 );
    }
  }
  if ( v3 > v0 )
    v3 = v0;
  return (v3 + 1) >> 1;
}
