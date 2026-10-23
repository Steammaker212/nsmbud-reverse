/* sub_6089FC9C
 * address: 0x6089FC9C   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089FC9C(int result, unsigned __int8 *a2)
{
  int v2; // r2
  bool v3; // zf
  int v4; // r6
  int v5; // r7
  int v6; // r6
  int v7; // r7
  int v8; // r7

  v2 = *((_DWORD *)a2 + 4);
  v3 = v2 == -1;
  if ( v2 != -1 )
  {
    a2 += v2;
    v3 = a2 == 0;
  }
  if ( !v3 )
  {
    do
    {
      v4 = *a2 | (a2[1] << 8) | (a2[2] << 16) | (a2[3] << 24);
      if ( v4 > 1280524612 )
      {
        if ( v4 <= 1381253444 )
        {
          if ( v4 <= 1346650434 )
          {
            if ( v4 != 1280524613 )
            {
              if ( v4 == 1313620806 )
              {
                FIELD_U32(result, 480) = &a2[*((_DWORD *)a2 + 5)];
                FIELD_U8(result, 3) = 1;
              }
              else if ( v4 == 1313887046 )
              {
                FIELD_U32(result, 464) = &a2[*((_DWORD *)a2 + 5)];
                FIELD_U8(result, 3) = 1;
              }
              goto LABEL_85;
            }
            FIELD_U32(result, 532) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
          if ( v4 <= 1346655554 )
          {
            if ( v4 == 1346650435 )
            {
              FIELD_U32(result, 552) = &a2[*((_DWORD *)a2 + 5)];
            }
            else if ( v4 == 1346655043 )
            {
              FIELD_U32(result, 544) = &a2[*((_DWORD *)a2 + 5)];
              FIELD_U32(result, 548) = *((_DWORD *)a2 + 1) - 32;
            }
            goto LABEL_85;
          }
          if ( v4 == 1346655555 )
          {
            FIELD_U32(result, 556) = &a2[*((_DWORD *)a2 + 5)];
          }
          else if ( v4 == 1380270405 )
          {
            FIELD_U32(result, 492) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 2) = 1;
            goto LABEL_84;
          }
        }
        else if ( v4 > 1447313732 )
        {
          if ( v4 > 1448034628 )
          {
            if ( v4 != 1448034629 )
            {
              if ( v4 == 1448035142 )
              {
                FIELD_U32(result, 472) = &a2[*((_DWORD *)a2 + 5)];
                FIELD_U8(result, 3) = 1;
              }
              goto LABEL_85;
            }
            FIELD_U32(result, 524) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
          if ( v4 == 1447313733 )
          {
            FIELD_U32(result, 528) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
          if ( v4 == 1447510341 )
          {
            FIELD_U32(result, 540) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
        }
        else if ( v4 > 1397965124 )
        {
          if ( v4 == 1397965125 )
          {
            FIELD_U32(result, 536) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
          if ( v4 == 1413824837 )
          {
            FIELD_U32(result, 496) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 2) = 1;
            goto LABEL_84;
          }
        }
        else
        {
          if ( v4 == 1381253445 )
          {
            FIELD_U32(result, 508) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
          if ( v4 == 1397047621 )
          {
            FIELD_U32(result, 488) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 2) = 1;
LABEL_84:
            FIELD_U8(result, 1) = 1;
          }
        }
      }
      else if ( v4 <= 858804292 )
      {
        if ( v4 <= 826360132 )
        {
          if ( v4 == 809582917 )
          {
            FIELD_U32(result, 516) = &a2[*((_DWORD *)a2 + 5)];
          }
          else
          {
            if ( v4 != 809713989 )
            {
              if ( v4 == 825249861 )
              {
                v7 = *((_DWORD *)a2 + 5);
                FIELD_U32(result, 576) = 1;
                FIELD_U32(result, 580) = &a2[v7];
              }
              goto LABEL_85;
            }
            FIELD_U32(result, 500) = &a2[*((_DWORD *)a2 + 5)];
          }
          goto LABEL_84;
        }
        if ( v4 > 827216453 )
        {
          if ( v4 == 827216454 )
          {
            FIELD_U32(result, 456) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 3) = 1;
            goto LABEL_85;
          }
          if ( v4 == 842027077 )
          {
            v5 = *((_DWORD *)a2 + 5);
            v6 = 2;
            goto LABEL_68;
          }
        }
        else
        {
          if ( v4 == 826360133 )
          {
            FIELD_U32(result, 520) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
          if ( v4 == 826491205 )
          {
            FIELD_U32(result, 504) = &a2[*((_DWORD *)a2 + 5)];
            goto LABEL_84;
          }
        }
      }
      else if ( v4 > 1179861829 )
      {
        if ( v4 <= 1280262981 )
        {
          if ( v4 == 1179861830 )
          {
            FIELD_U32(result, 484) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 3) = 1;
          }
          else if ( v4 == 1195461958 )
          {
            FIELD_U32(result, 460) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 3) = 1;
          }
          goto LABEL_85;
        }
        if ( v4 == 1280262982 )
        {
          FIELD_U32(result, 468) = &a2[*((_DWORD *)a2 + 5)];
          FIELD_U8(result, 3) = 1;
        }
        else if ( v4 == 1280328005 )
        {
          FIELD_U32(result, 512) = &a2[*((_DWORD *)a2 + 5)];
          goto LABEL_84;
        }
      }
      else
      {
        if ( v4 > 1145131077 )
        {
          if ( v4 == 1145131078 )
          {
            FIELD_U32(result, 476) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 3) = 1;
          }
          else if ( v4 == 1145983558 )
          {
            FIELD_U32(result, 452) = &a2[*((_DWORD *)a2 + 5)];
            FIELD_U8(result, 3) = 1;
          }
          goto LABEL_85;
        }
        if ( v4 == 858804293 )
        {
          v5 = *((_DWORD *)a2 + 5);
          v6 = 3;
          goto LABEL_68;
        }
        if ( v4 == 875581509 )
        {
          v5 = *((_DWORD *)a2 + 5);
          v6 = 4;
LABEL_68:
          FIELD_U32(result, 576) = v6;
          FIELD_U32(result, 580) = &a2[v5];
        }
      }
LABEL_85:
      v8 = *((_DWORD *)a2 + 3);
      a2 += v8;
      if ( v8 == -1 )
        a2 = 0;
    }
    while ( a2 );
  }
  return result;
}
