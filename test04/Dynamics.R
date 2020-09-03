
AddNodeType("Wall","BOUNDARY") # This is needed due to bug #314

AddDensity(name="phi", dx=1, dy=-1)
AddField(name="phi", dx=0, dy=0) # Adding access for getPhi
AddQuantity(name="Phi")
AddSetting(name="Phi", zonal=TRUE)

