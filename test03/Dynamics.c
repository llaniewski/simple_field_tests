
CudaDeviceFunction float2 Color() {
    float2 ret;
    ret.x = getPhi();
    ret.y = 1;
    return ret;
}

CudaDeviceFunction real_t getPhi() {
    return phi(0,0);
}

CudaDeviceFunction void Init() {
    phi = Phi; //Initiate from zonal setting
}

CudaDeviceFunction void Run() { 
    phi = phi(-1,1); //Just stream
}

