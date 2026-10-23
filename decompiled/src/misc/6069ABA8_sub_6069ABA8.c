/* sub_6069ABA8
 * address: 0x6069ABA8   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069ABA8(unsigned int *a1, int a2)
{
  unsigned int *v3; // r5
  int result; // r0
  unsigned int v5; // t1
  int v6; // r0

  v3 = a1 + 1539;
  if ( a1[1539] )
  {
    v3 = a1 + 1542;
    if ( a1[1542] )
    {
      v3 = a1 + 1545;
      if ( a1[1545] )
      {
        v3 = a1 + 1548;
        if ( a1[1548] )
        {
          v3 = a1 + 1551;
          if ( a1[1551] )
          {
            v3 = a1 + 1554;
            if ( a1[1554] )
            {
              v3 = a1 + 1557;
              if ( a1[1557] )
              {
                v3 = a1 + 1560;
                if ( a1[1560] )
                {
                  v3 = a1 + 1563;
                  if ( a1[1563] )
                  {
                    v3 = a1 + 1566;
                    if ( a1[1566] )
                    {
                      v3 = a1 + 1569;
                      if ( a1[1569] )
                      {
                        v5 = a1[1572];
                        result = (int)(a1 + 1572);
                        if ( v5 )
                          return result;
                        v3 = (unsigned int *)result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3[1]);
  *v3 = FIELD_U32(a2, 8);
  v3[2] = FIELD_U32(v6, 156);
  return sub_60699C44(v3);
}
